// tema1_par.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include "sack_object.h"
#include "individual.h"
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <cstring>
struct arguments
{
	//Variabile pentru impartirea elementelor
	int start, start_30, start_20, start_even, start_odd;
	int end, end_30, end_20;

	//Variabile despre obiecte
	sack_object* objects;
	int object_count;
	int sack_capacity;
	int generations_count;

	//Variabile generatii
	individual* current_generation;
	individual* next_generation;

	//Date despre thread
	int threadID;
	int nrThreads;

	//Elemente de sincronizare
	pthread_barrier_t* barrier;
};
//--------------------------------------------------------------------------------------------------
long Min(int a, int b) {
	if (a <= b)
		return a;
	else
		return b;
}
void compute_fitness_function(const sack_object* objects, individual* generation, int start, int end, int sack_capacity)
{
	int weight;
	int profit;

	for (int i = start; i < end; ++i) {
		weight = 0;
		profit = 0;

		for (int j = 0; j < generation[i].chromosome_length; ++j) {
			if (generation[i].chromosomes[j]) {
				weight += objects[j].weight;
				profit += objects[j].profit;
			}
		}

		generation[i].fitness = (weight <= sack_capacity) ? profit : 0;
	}
}
void copy_individual(const individual* from, const individual* to)
{
	memcpy(to->chromosomes, from->chromosomes, from->chromosome_length * sizeof(int));
}
void mutate_bit_string_1(const individual* ind, int generation_index)
{
	int i, mutation_size;
	int step = 1 + generation_index % (ind->chromosome_length - 2);

	if (ind->index % 2 == 0) {
		// for even-indexed individuals, mutate the first 40% chromosomes by a given step
		mutation_size = ind->chromosome_length * 4 / 10;
		for (i = 0; i < mutation_size; i += step) {
			ind->chromosomes[i] = 1 - ind->chromosomes[i];
		}
	}
	else {
		// for even-indexed individuals, mutate the last 80% chromosomes by a given step
		mutation_size = ind->chromosome_length * 8 / 10;
		for (i = ind->chromosome_length - mutation_size; i < ind->chromosome_length; i += step) {
			ind->chromosomes[i] = 1 - ind->chromosomes[i];
		}
	}
}
void mutate_bit_string_2(const individual* ind, int generation_index)
{
	int step = 1 + generation_index % (ind->chromosome_length - 2);

	// mutate all chromosomes by a given step
	for (int i = 0; i < ind->chromosome_length; i += step) {
		ind->chromosomes[i] = 1 - ind->chromosomes[i];
	}
}
void crossover(individual* parent1, individual* child1, int generation_index)
{
	individual* parent2 = parent1 + 1;
	individual* child2 = child1 + 1;
	int count = 1 + generation_index % parent1->chromosome_length;

	memcpy(child1->chromosomes, parent1->chromosomes, count * sizeof(int));
	memcpy(child1->chromosomes + count, parent2->chromosomes + count, (parent1->chromosome_length - count) * sizeof(int));

	memcpy(child2->chromosomes, parent2->chromosomes, count * sizeof(int));
	memcpy(child2->chromosomes + count, parent1->chromosomes + count, (parent1->chromosome_length - count) * sizeof(int));
}
void print_generation(const individual* generation, int limit)
{
	for (int i = 0; i < limit; ++i) {
		for (int j = 0; j < generation[i].chromosome_length; ++j) {
			printf("%d ", generation[i].chromosomes[j]);
		}

		printf("\n%d - %d\n", i, generation[i].fitness);
	}
}
void print_best_fitness(const individual* generation)
{
	printf("%d\n", generation[0].fitness);
}
void free_generation(individual* generation)
{
	int i;

	for (i = 0; i < generation->chromosome_length; ++i) {
		free(generation[i].chromosomes);
		generation[i].chromosomes = NULL;
		generation[i].fitness = 0;
	}
}


//--------------------------------------------------------------------------------------------------
void* run_genetic_algorithm(void* arg)
{
	struct arguments argum = *(struct arguments *) (arg);
	//----------------------------------------------------------------------------------
	int count, cursor;
	individual* tmp = NULL;

	// set initial generation (composed of object_count individuals with a single item in the sack)
	for (int i = argum.start; i < argum.end; ++i) {
		argum.current_generation[i].fitness = 0;
		argum.current_generation[i].chromosomes = (int*)calloc(argum.object_count, sizeof(int));
		argum.current_generation[i].chromosomes[i] = 1;
		argum.current_generation[i].index = i;
		argum.current_generation[i].chromosome_length = argum.object_count;

		argum.next_generation[i].fitness = 0;
		argum.next_generation[i].chromosomes = (int*)calloc(argum.object_count, sizeof(int));
		argum.next_generation[i].index = i;
		argum.next_generation[i].chromosome_length = argum.object_count;

	}

	// iterate for each generation
	for (int k = 0; k < argum.generations_count; ++k) {
		cursor = 0;

		// compute fitness and sort by it
		compute_fitness_function(argum.objects, argum.current_generation, argum.start, argum.end, argum.sack_capacity);
		
		//------------------------------------------BARIERA---------------------------------------------------------------------
		pthread_barrier_wait(argum.barrier);
		//----------------------------------------------------------------------------------------------------------------------

		//Sortare OETS
		for (int i = 0; i < argum.object_count; i++) {
			for (int j = argum.start_odd; (j < argum.end) && (j < argum.object_count - 1); j = j + 2) {
				if (argum.current_generation[j].fitness < argum.current_generation[j + 1].fitness) {
					individual aux = argum.current_generation[j];
					argum.current_generation[j] = argum.current_generation[j + 1];
					argum.current_generation[j + 1] = aux;
				}
			}

			pthread_barrier_wait(argum.barrier);

			for (int j = argum.start_even; (j < argum.end) && (j < argum.object_count - 1); j = j + 2) {
				if (argum.current_generation[j].fitness < argum.current_generation[j + 1].fitness) {
					individual aux = argum.current_generation[j];
					argum.current_generation[j] = argum.current_generation[j + 1];
					argum.current_generation[j + 1] = aux;
				}
			}

			pthread_barrier_wait(argum.barrier);
		}

		// keep first 30% children (elite children selection)
		count = argum.object_count * 3 / 10;
		for (int i = argum.start_30; i < argum.end_30; ++i) {
			copy_individual(argum.current_generation + i, argum.next_generation + i);
		}
		cursor = count;
		
		// mutate first 20% children with the first version of bit string mutation
		count = argum.object_count * 2 / 10;
		for (int i = argum.start_20; i < argum.end_20; ++i) {
			copy_individual(argum.current_generation + i, argum.next_generation + cursor + i);
			mutate_bit_string_1(argum.next_generation + cursor + i, k);
		}
		cursor += count;
		
		// mutate next 20% children with the second version of bit string mutation
		count = argum.object_count * 2 / 10;
		for (int i = argum.start_20; i < argum.end_20; ++i) {
			copy_individual(argum.current_generation + i + count, argum.next_generation + cursor + i);
			mutate_bit_string_2(argum.next_generation + cursor + i, k);
		}
		cursor += count;

		// crossover first 30% parents with one-point crossover
		// (if there is an odd number of parents, the last one is kept as such)
		count = argum.object_count * 3 / 10;
		
		if (count % 2 == 1) {
			copy_individual(argum.current_generation + argum.object_count - 1, argum.next_generation + cursor + count - 1);
			count--;
		}

		if (argum.start_30 % 2 == 1) {
			for (int i = argum.start_30 + 1; i < argum.end_30; i += 2) {
				crossover(argum.current_generation + i, argum.next_generation + cursor + i, k);
			}
		}

		else {
			for (int i = argum.start_30; i < argum.end_30; i += 2) {
				crossover(argum.current_generation + i, argum.next_generation + cursor + i, k);
			}
		}

		//------------------------------------------BARIERA---------------------------------------------------------------------
		pthread_barrier_wait(argum.barrier);
		//----------------------------------------------------------------------------------------------------------------------

		// switch to new generation
		tmp = argum.current_generation;
		argum.current_generation = argum.next_generation;
		argum.next_generation = tmp;
		if (argum.threadID == 0) {
			for (int i = argum.start; i < argum.end; ++i) {
				argum.current_generation[i].index = i;
			}

			if (k % 5 == 0) {
				print_best_fitness(argum.current_generation);
			}
		}
	}

	// compute fitness and sort by it
	compute_fitness_function(argum.objects, argum.current_generation, argum.start, argum.end, argum.sack_capacity);

	//------------------------------------------BARIERA---------------------------------------------------------------------
	pthread_barrier_wait(argum.barrier);
	//----------------------------------------------------------------------------------------------------------------------

	//Sortare
	for (int i = 0; i < argum.object_count; i++) {
		for (int j = argum.start_odd; (j < argum.end) && (j < argum.object_count - 1); j = j + 2) {
			if (argum.current_generation[j].fitness < argum.current_generation[j + 1].fitness) {
				individual aux = argum.current_generation[j];
				argum.current_generation[j] = argum.current_generation[j + 1];
				argum.current_generation[j + 1] = aux;
			}
		}

		pthread_barrier_wait(argum.barrier);

		for (int j = argum.start_even; (j < argum.end) && (j < argum.object_count - 1); j = j + 2) {
			if (argum.current_generation[j].fitness < argum.current_generation[j + 1].fitness) {
				individual aux = argum.current_generation[j];
				argum.current_generation[j] = argum.current_generation[j + 1];
				argum.current_generation[j + 1] = aux;
			}
		}

		pthread_barrier_wait(argum.barrier);
	}

	return NULL;
}
//--------------------------------------------------------------------------------------------------


int read_input(sack_object** objects, int* object_count, int* sack_capacity, int* generations_count, int argc, char* argv[])
{
	FILE* fp;

	if (argc < 3) {
		fprintf(stderr, "Usage:\n\t./tema1 in_file generations_count\n");
		return 0;
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		return 0;
	}

	if (fscanf(fp, "%d %d", object_count, sack_capacity) < 2) {
		fclose(fp);
		return 0;
	}

	if (*object_count % 10) {
		fclose(fp);
		return 0;
	}

	sack_object* tmp_objects = (sack_object*)calloc(*object_count, sizeof(sack_object));

	for (int i = 0; i < *object_count; ++i) {
		if (fscanf(fp, "%d %d", &tmp_objects[i].profit, &tmp_objects[i].weight) < 2) {
			free(objects);
			fclose(fp);
			return 0;
		}
	}

	fclose(fp);

	*generations_count = (int)strtol(argv[2], NULL, 10);

	if (*generations_count == 0) {
		free(tmp_objects);

		return 0;
	}

	*objects = tmp_objects;

	return 1;
}
int main(int argc, char* argv[])
{
	const int NUM_THREADS = atoi(argv[3]); //nr threaduri

	//Declarare Structura cu argumentele funcitei de threaduri
	struct arguments argum[NUM_THREADS];

	///Declarare variabile pt threaduri
	int r;
	pthread_t* threads;
	threads = new pthread_t[NUM_THREADS];
	void* status;

	//Declarare variabile citire
	sack_object* objects = NULL;	// array with all the objects that can be placed in the sack
	int object_count = 0;			// number of objects
	int sack_capacity = 0;			// maximum weight that can be carried in the sack
	int generations_count = 0;		// number of generations

	//Declarare elemente de sincronizare
	pthread_barrier_t barrier;
	pthread_barrier_init(&barrier, NULL, NUM_THREADS);

	//Se apeleaza funcita de citire
	if (!read_input(&objects, &object_count, &sack_capacity, &generations_count, argc, argv)) {
		return 0;
	}

	//Declarare generatii
	individual* current_generation = (individual*)calloc(object_count, sizeof(individual));
	individual* next_generation = (individual*)calloc(object_count, sizeof(individual));

	//---------------------------------------------------------------------------------------------------------
	//Deschidere Threaduri
	for (int i = 0; i < NUM_THREADS; i++) {

		//Calculam start si end astfel incat generatia sa fie impartita in mod egal la toate threadurile
		argum[i].start = i * (double)object_count / NUM_THREADS;
		argum[i].end = Min((i + 1) * (double)object_count / NUM_THREADS, object_count);

		//
		argum[i].start_30 = i * (double)(object_count * 30 / 100) / NUM_THREADS;
		argum[i].end_30 = Min((i + 1) * (double)(object_count * 30 / 100) / NUM_THREADS, object_count);

		//
		argum[i].start_20 = i * (double)(object_count * 20 / 100) / NUM_THREADS;
		argum[i].end_20 = Min((i + 1) * (double)(object_count * 20 / 100) / NUM_THREADS, object_count);

		//
		argum[i].objects = objects;
		argum[i].generations_count = generations_count;
		argum[i].object_count = object_count;
		argum[i].sack_capacity = sack_capacity;

		//
		argum[i].current_generation = current_generation;
		argum[i].next_generation = next_generation;

		//
		argum[i].threadID = i;
		argum[i].nrThreads = NUM_THREADS;

		//Elemente de sincronizare
		argum[i].barrier = &barrier;

		//
		if (argum[i].start % 2 == 0) {
			argum[i].start_even = argum[i].start;
			argum[i].start_odd = argum[i].start + 1;
		}
		else {
			argum[i].start_even = argum[i].start + 1;
			argum[i].start_odd = argum[i].start;
		}

		//r = pthread_create(&threads[i], NULL, f, (struct arguments*)&start_end[i]);
		r = pthread_create(&threads[i], NULL, run_genetic_algorithm, reinterpret_cast<struct argumets*>(&argum[i]));

		if (r) {
			printf("Eroare la crearea thread-ului %d\n", i);
			exit(-1);
		}
	}
	//Inchidere Threaduri
	for (int id = 0; id < NUM_THREADS; id++) {
		r = pthread_join(threads[id], &status);
		if (r) {
			printf("Eroare la asteptarea thread-ului %d\n", id);
			exit(-1);
		}
	}
	//---------------------------------------------------------------------------------------------------------
	print_best_fitness(current_generation);

	// free resources for old generation
	free_generation(current_generation);
	free_generation(next_generation);

	// free resources
	free(current_generation);
	free(next_generation);
	free(objects);
	return 0;
}
