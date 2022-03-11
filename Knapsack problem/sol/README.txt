----Paralelizarea unui algoritm genetic----

Proiectul cuprinde urmatoarele fisiere:

-makefile
-individual.h   - nu a fost modificat fata de codul secvential
-sack_objects.h - nu a fost modificat fata de codul secvential
-tema1_par.cpp
  

tema1_par cuprinde urmatoarele functii ce au fost importate din codul secvential fara sa fie facute modificari asupra lor:

-read_input
-copy_individual
-mutate_bit_string_1
-mutate_bit_string_2
-crossover
-print_generation
-print_best_fitness
-free_generation


	Pentru functia compute_fitness_function am adaugat doua argumente pentru a paraleliza for-ul din cadrul acesteia; Cele doua argumente
sunt: int start si int end; Cele doua sunt calculate astfel incat vectorul generation sa fie impartit in mod egal intre thread-uri.

	Functia Min returneaza minimul dintre doua numere - este folosita la calculul pentru impartirea elementelor intre thread-uri in mod egal;
ex: argum[i].end = Min((i + 1) * (double)object_count / NUM_THREADS, object_count);

	

	In Main se realizeaza urmatoarele:

- se citeste numarul de threaduri (NUM_THREADS);
- se declara un vector de tipul struct arguments cu NUM_THREADS elemente;
- se declara variabilele necesare pentru deschiderea thread-urilor;
- se declara variabilele de citire;
- se declara elementele de sincronizare;
- se apeleaza functia de citire read_input;
- se creeaza vectorii current_generation si next_generation;
- se deschid thread-urile;
- thread-urile vor rula functia run_genetic_algorithm.
- se inchid thread-urile;
- se afiseaza cel mai bun fitness;
- se elibereaza memoria;

Deschiderea threadurilor presupune:

-calculul de start-uri si end-uri pentru impartirea in mod egal a elementelor intre thread-uri;
-popularea vectorului de structuri cu datele necesare: -start,end; start_20,end_20; start_30,end_30; start_even,start_odd;
						       -objects; generations_count; object_count; sack_capacity;
						       -current_generation; next_generation -- Fiecare thread trebuie sa aiba acces la intreg vectorul 
							current_generation si next_generation;
						       -threadID; nrThreads;
						       -barrier -- Element de sincronizare a thread-urilor;


	Struct arguments - structura ce transmite datale necesare thread-urilor si cuprinde:

-start, end       -- variabile ce descriu inceputul si finalul segmentului pe care lucreaza thread-ul; Acestea impart in mod egal generatiile intre thread-uri;
-start_20, end_20 -- variabile ce descriu inceputul si finalul segmentului pe care lucreaza thread-ul; Acestea impart in mod egal primii 20% din indivizii din generatie;
-start_30, end_30 -- variabile ce descriu inceputul si finalul segmentului pe care lucreaza thread-ul; Acestea impart in mod egal primii 30% din indivizii din generatie;
-start_even, start_odd  -- variabile ce sunt necesare pentru sortarea generatiei in functie de fitness; -- Sortarea OETS;
-objects, object_count, sack_capacity, generations_count  -- sunt argumentele necesare de baza pentru rularea secventiala a programului, dar sunt necesare si pentru 
							     rularea in paralel;
-current_generation, next_generation;
-threadID  - variabila in care este stocat ID-ul threadului;
-nrThreads - variabila in care este stocat numarul de thread-uri deschise;
-pthread_barrier_t* barrier - element de sincronizare;


	Functia run_genetic_algorithm - este functia pe care o ruleaza thread-urile. Aceasta este functia in care se realizeaza paralelizarea programului. In cea mai mare parte, 
codul original a fost pastrat; au fost facute modificari for-urilor si adaugarea sortarii OETS.
Se urmeaza urmatorii pasi:

-se declara un struct arguments numit argum in care am copiat structura transmisa ca argument la deschiderea threadurilor. Acum, in aceasta avem toate datele necesare pentru
paralelizarea programului.
-construirea generatiilor a fost impartita pe threaduri cu ajutorul variabilelor start si end;
Se repeta urmatoarele in functie de numarul de generatii dorit:
-se calculeaza finess-ul pentru elementele din generatie - aceasta functie este apelata avand ca argumente start-ul si end-ul pentru impartirea in mod egal la thread-uri;
-se pune o bariera pentru a realiza o sortare corecta in functie de fitness a elementelor;
-se realizeaza o sortare dupa fitness a generatiei; Sortarea OETS de la laborator a fost luata ca model.
-se pastreaza primii 30% din indivizi - se folosesc start_30 si end_30 pentru paralelizare;
-intr-un for, care a fost paralelizat folosind start_20 si end_20, se apeleaza functia mutate_bit_string_1;
-intr-un for, care a fost paralelizat folosind start_20 si end_20, se apeleaza functia mutate_bit_string_2;
-pentru aplicarea functiei de crossover este necesar sa luam in calcul daca numarul de elemente pe care lucreaza un thread este par sau impar; Daca acesta este par, se aplica 
crossoverul fara nicio modificare. In caz contrar, aplicarea crossoverului incepe de la pozitia argum.start_30 + 1 deoarece daca functia crossover nu este aplicata pe un numar
par de elemente, vor ajunge in generatia urmatoare elemente eronate, iar elementul de pe pozitia argum.start_30 este procesat de thread-ul anterior(nu exista discontinuitati);
-se aplica o bariera inainte de comutarea la noua generatie pentru a ne asigura ca calculele au fost finalizate;
-se calculeaza din nou fitness-ul;
-se pune o bariera pentru a asigura calculul complet al fintess-ului fiiecarui element;
-se realizeaza din nou sortarea;



































