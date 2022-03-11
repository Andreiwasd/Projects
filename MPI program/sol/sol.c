#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define coordonator0 0
#define coordonator1 1
#define coordonator2 2

int main(int argc, char *argv[]) {

    int numtasks, rank;
    MPI_Status status;
   
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    int P = atoi(argv[2]);

    int tag0 = coordonator0;
    int tag1 = coordonator1;
    int tag2 = coordonator2;

    if (rank == coordonator0) {
        int N = atoi(argv[1]);
        //------------------------------------------------Citire fisier--------------------------------------------------------
        FILE *FILE_CLUSTER = fopen("cluster0.txt", "rt");
        int nr_workeri;
        fscanf(FILE_CLUSTER, "%d", &nr_workeri);
        int v_rank_workeri[nr_workeri];
        for (int i = 0; i < nr_workeri; i++)
            fscanf(FILE_CLUSTER, "%d", &v_rank_workeri[i]);
        //----------------------------------------------------------------------------------------------------------------------

        //Trimitere lista workeri catre ceilalti coordonatori
        //comunicare intree 0 si 1 exista
        if (P == 0) {
            //coordonator1
            MPI_Send(&nr_workeri, 1, MPI_INT, 1, tag0, MPI_COMM_WORLD);
            printf("M(%d,1)\n",rank);
            MPI_Send(v_rank_workeri, nr_workeri, MPI_INT, 1, tag0, MPI_COMM_WORLD);
            printf("M(%d,1)\n",rank);
            //coordonator2
            MPI_Send(&nr_workeri, 1, MPI_INT, 2, tag0, MPI_COMM_WORLD);
            printf("M(%d,2)\n",rank);
            MPI_Send(v_rank_workeri, nr_workeri, MPI_INT, 2, tag0, MPI_COMM_WORLD);
            printf("M(%d,2)\n",rank);
        }
        //comunicare intre 0 si 1 nu exista
        else {
            //coordonator2
            MPI_Send(&nr_workeri, 1, MPI_INT, 2, tag0, MPI_COMM_WORLD);
            printf("M(%d,2)\n",rank);
            MPI_Send(v_rank_workeri, nr_workeri, MPI_INT, 2, tag0, MPI_COMM_WORLD);
            printf("M(%d,2)\n",rank);
        }

        //Primeste mesaje cu lista de workeri de la ceilalti coordonatori
        int nr_workeri1, nr_workeri2;
        int *v_workeri1;
        int *v_workeri2;
        if (P == 0) {
            MPI_Recv(&nr_workeri1, 1, MPI_INT, 1, tag1, MPI_COMM_WORLD, &status);
            v_workeri1 = (int *)malloc(nr_workeri1 * sizeof(int));
            MPI_Recv(v_workeri1, nr_workeri1, MPI_INT, 1, tag1, MPI_COMM_WORLD, &status);

            MPI_Recv(&nr_workeri2, 1, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);
            v_workeri2 = (int *)malloc(nr_workeri2 * sizeof(int));
            MPI_Recv(v_workeri2, nr_workeri2, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);
        }
        else {
            MPI_Recv(&nr_workeri1, 1, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);
            v_workeri1 = (int *)malloc(nr_workeri1 * sizeof(int));
            MPI_Recv(v_workeri1, nr_workeri1, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);

            MPI_Recv(&nr_workeri2, 1, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);
            v_workeri2 = (int *)malloc(nr_workeri2 * sizeof(int));
            MPI_Recv(v_workeri2, nr_workeri2, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);
        }
        

        //afisare topologie
        printf("0 -> 0:");
        for (int i = 0; i < nr_workeri; i++) {
            printf("%d",v_rank_workeri[i]);
            if (i != nr_workeri - 1)
                printf(",");
        }
        printf(" 1:");
        for (int i = 0; i < nr_workeri1; i++) {
            printf("%d",v_workeri1[i]);
            if (i != nr_workeri1 - 1)
                printf(",");
        }
        printf(" 2:");
        for (int i = 0; i < nr_workeri2; i++) {
            printf("%d",v_workeri2[i]);
            if (i != nr_workeri2 - 1)
                printf(",");
        }    
        printf("\n");

        //transmitere topologie catre workeri
        for (int i = 0; i < nr_workeri; i++) {
            MPI_Send(&nr_workeri, 1, MPI_INT, v_rank_workeri[i], tag0, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);
            MPI_Send(v_rank_workeri, nr_workeri, MPI_INT, v_rank_workeri[i], tag0, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);

            MPI_Send(&nr_workeri1, 1, MPI_INT, v_rank_workeri[i], tag0, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);
            MPI_Send(v_workeri1, nr_workeri1, MPI_INT, v_rank_workeri[i], tag0, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);

            MPI_Send(&nr_workeri2, 1, MPI_INT, v_rank_workeri[i], tag0, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);
            MPI_Send(v_workeri2, nr_workeri2, MPI_INT, v_rank_workeri[i], tag0, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);
        }

        //------------------------------------------------Realizarea Calculelor-----------------------------------------------

        //generare vector
        int v[N];
        for (int i = 0 ; i < N; i++) {
            v[i] = i;
        }
            
        int nr_total_workeri = nr_workeri + nr_workeri1 + nr_workeri2;
        int nr_elemente_worker = N / nr_total_workeri;
        int dif = N % nr_total_workeri;

        int nr_elem_v0 = nr_elemente_worker * nr_workeri;
        int nr_elem_v1 = nr_elemente_worker * nr_workeri1;
        int nr_elem_v2 = nr_elemente_worker * nr_workeri2;

        while (dif > 2) {
            int rest = dif % 3;
            dif = dif / 3;

            nr_elem_v0 += dif;
            nr_elem_v1 += dif;
            nr_elem_v2 += dif;

            dif = rest;
        }
        while (dif != 0) {
            if (nr_workeri > nr_workeri1 && nr_workeri > nr_workeri2) 
                nr_elem_v0++;
            else if (nr_workeri1 > nr_workeri2)
                nr_elem_v1++;
            else
                nr_elem_v2++;
            dif--;
        }

        //copiere valori in vectorii de trimis
        int v0[nr_elem_v0];
        int v1[nr_elem_v1];
        int v2[nr_elem_v2];

        for (int i = 0; i < nr_elem_v0; i++) {
            v0[i] = v[i];
        }
        int j = 0;
        for (int i = nr_elem_v0; i < nr_elem_v0 + nr_elem_v1; i++) {
            v1[j] = v[i];
            j++;
        }
        j = 0;
        for (int i = nr_elem_v0 + nr_elem_v1; i < N; i++) {
            v2[j] = v[i];
            j++;
        }

        //trimitere vectori catre ceilalti coordonatori
        if (P == 0) {
            //coordonator1
            MPI_Send(&nr_elem_v1, 1, MPI_INT, 1, tag0, MPI_COMM_WORLD);
            printf("M(0,1)\n");
            MPI_Send(v1, nr_elem_v1, MPI_INT, 1, tag0, MPI_COMM_WORLD);
            printf("M(0,1)\n");
            MPI_Send(&N, 1, MPI_INT, 1, tag0, MPI_COMM_WORLD);
            printf("M(0,1)\n");

            //coordonator2
            MPI_Send(&nr_elem_v2, 1, MPI_INT, 2, tag0, MPI_COMM_WORLD);
            printf("M(0,2)\n");
            MPI_Send(v2, nr_elem_v2, MPI_INT, 2, tag0, MPI_COMM_WORLD);
            printf("M(0,2)\n");
            MPI_Send(&N, 1, MPI_INT, 2, tag0, MPI_COMM_WORLD);
            printf("M(0,2)\n");
        }
        else {
            //coordonator1
            MPI_Send(&nr_elem_v1, 1, MPI_INT, 2, tag0, MPI_COMM_WORLD);
            printf("M(0,2)\n");
            MPI_Send(v1, nr_elem_v1, MPI_INT, 2, tag0, MPI_COMM_WORLD);
            printf("M(0,2)\n");
            MPI_Send(&N, 1, MPI_INT, 2, tag0, MPI_COMM_WORLD);
            printf("M(0,2)\n");

            //coordonator2
            MPI_Send(&nr_elem_v2, 1, MPI_INT, 2, tag0, MPI_COMM_WORLD);
            printf("M(0,2)\n");
            MPI_Send(v2, nr_elem_v2, MPI_INT, 2, tag0, MPI_COMM_WORLD);
            printf("M(0,2)\n");
            MPI_Send(&N, 1, MPI_INT, 2, tag0, MPI_COMM_WORLD);
            printf("M(0,2)\n");
        }
        

        //scatter catre workeri
        int diferenta = nr_elem_v0 % nr_workeri;
        int nr_elem = nr_elem_v0 / nr_workeri;
        
        while (diferenta > nr_workeri - 1) {
            int rest = diferenta % nr_workeri;
            diferenta = diferenta / nr_workeri;
            nr_elem += diferenta;
            
            diferenta = rest;
        }
        int v_nr_elem[nr_workeri];
        for (int i = 0; i < nr_workeri; i++) {
            v_nr_elem[i] = nr_elem;
        }

        for (int i = 0; i < diferenta; i++) {
            v_nr_elem[i]++;
        }
        
        int count = 0;
        for (int i = 0; i < nr_workeri; i++) {
            int v_send[v_nr_elem[i]];
            for (int j = 0; j < v_nr_elem[i]; j++) {
                v_send[j] = v0[count];
                count++;
            }
            MPI_Send(&v_nr_elem[i], 1, MPI_INT, v_rank_workeri[i], tag0, MPI_COMM_WORLD);
            printf("M(0,%d)\n",v_rank_workeri[i]);
            MPI_Send(v_send, v_nr_elem[i], MPI_INT, v_rank_workeri[i], tag0, MPI_COMM_WORLD);
            printf("M(0,%d)\n",v_rank_workeri[i]);
        }

        //primire vector inapoi de la workeri
        count = 0;
        for (int i = 0; i < nr_workeri; i++) {
            int nr_elem;
            MPI_Recv(&nr_elem, 1, MPI_INT, v_rank_workeri[i], tag0, MPI_COMM_WORLD, &status);
            int v_recv[nr_elem];
            MPI_Recv(v_recv, nr_elem, MPI_INT, v_rank_workeri[i], tag0, MPI_COMM_WORLD, &status);
            for (int j = 0; j < nr_elem; j++) {
                v[count] = v_recv[j];
                count++;
            }
        }

        //primire vectori de la coordonatori
        if (P == 0) {
            //coordonator1
            MPI_Recv(&nr_elem_v1, 1, MPI_INT, coordonator1, tag1, MPI_COMM_WORLD, &status);
            MPI_Recv(v1, nr_elem_v1, MPI_INT, coordonator1, tag1, MPI_COMM_WORLD, &status);
            //coordonator2
            MPI_Recv(&nr_elem_v2, 1, MPI_INT, coordonator2, tag2, MPI_COMM_WORLD, &status);
            MPI_Recv(v2, nr_elem_v2, MPI_INT, coordonator2, tag2, MPI_COMM_WORLD, &status);
        }
        else {
            //coordonator1
            MPI_Recv(&nr_elem_v1, 1, MPI_INT, coordonator2, tag2, MPI_COMM_WORLD, &status);
            MPI_Recv(v1, nr_elem_v1, MPI_INT, coordonator2, tag2, MPI_COMM_WORLD, &status);
            //coordonator2
            MPI_Recv(&nr_elem_v2, 1, MPI_INT, coordonator2, tag2, MPI_COMM_WORLD, &status);
            MPI_Recv(v2, nr_elem_v2, MPI_INT, coordonator2, tag2, MPI_COMM_WORLD, &status);
        }

        for (int i = 0; i < nr_elem_v1; i++) {
            v[count] = v1[i];
            count++;
        }

        for (int i = 0; i < nr_elem_v2; i++) {
            v[count] = v2[i];
            count++;
        }

        printf("Rezultat: ");
        for(int i = 0; i < N; i++) {
            printf("%d ", v[i]); 
        }
        printf("\n");


        //---------------------------------------------------------------------------------------------------------------------
    }
    if (rank == coordonator1) {
        //------------------------------------------------Citire fisier--------------------------------------------------------
        FILE *FILE_CLUSTER = fopen("cluster1.txt", "rt");
        int nr_workeri;
        fscanf(FILE_CLUSTER, "%d", &nr_workeri);
        int v_rank_workeri[nr_workeri];
        for (int i = 0; i < nr_workeri; i++)
            fscanf(FILE_CLUSTER, "%d", &v_rank_workeri[i]);
        //----------------------------------------------------------------------------------------------------------------------
        
        //Trimitere lista workeri catre ceilalti coordonatori
        if (P == 0) {
            //coordonator0
            MPI_Send(&nr_workeri, 1, MPI_INT, 0, tag1, MPI_COMM_WORLD);
            printf("M(%d,0)\n",rank);
            MPI_Send(v_rank_workeri, nr_workeri, MPI_INT, 0, tag1, MPI_COMM_WORLD);
            printf("M(%d,0)\n",rank);
            //coordonator2
            MPI_Send(&nr_workeri, 1, MPI_INT, 2, tag1, MPI_COMM_WORLD);
            printf("M(%d,2)\n",rank);
            MPI_Send(v_rank_workeri, nr_workeri, MPI_INT, 2, tag1, MPI_COMM_WORLD);
            printf("M(%d,2)\n",rank);
        }
        else {
            //coordonator2
            MPI_Send(&nr_workeri, 1, MPI_INT, 2, tag1, MPI_COMM_WORLD);
            printf("M(%d,2)\n",rank);
            MPI_Send(v_rank_workeri, nr_workeri, MPI_INT, 2, tag1, MPI_COMM_WORLD);
            printf("M(%d,2)\n",rank);
        }
        

        //Primeste mesaje cu lista de workeri de la ceilalti coordonatori
        int nr_workeri0, nr_workeri2;
        int *v_workeri0;
        int *v_workeri2;
        if (P == 0) {
            MPI_Recv(&nr_workeri0, 1, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);
            v_workeri0 = (int *)malloc(nr_workeri0 * sizeof(int));
            MPI_Recv(v_workeri0, nr_workeri0, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);

            MPI_Recv(&nr_workeri2, 1, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);
            v_workeri2 = (int *)malloc(nr_workeri2 * sizeof(int));
            MPI_Recv(v_workeri2, nr_workeri2, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);
        }
        else {
            MPI_Recv(&nr_workeri0, 1, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);
            v_workeri0 = (int *)malloc(nr_workeri0 * sizeof(int));
            MPI_Recv(v_workeri0, nr_workeri0, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);

            MPI_Recv(&nr_workeri2, 1, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);
            v_workeri2 = (int *)malloc(nr_workeri2 * sizeof(int));
            MPI_Recv(v_workeri2, nr_workeri2, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);
        }

        //afisare topologie
        printf("1 -> 0:");
        for (int i = 0; i < nr_workeri0; i++) {
            printf("%d",v_workeri0[i]);
            if (i != nr_workeri0 - 1)
                printf(",");
        }
        printf(" 1:");
        for (int i = 0; i < nr_workeri; i++) {
            printf("%d",v_rank_workeri[i]);
            if (i != nr_workeri - 1)
                printf(",");
        }
        printf(" 2:");
        for (int i = 0; i < nr_workeri2; i++) {
            printf("%d",v_workeri2[i]);
            if (i != nr_workeri2 - 1)
                printf(",");
        }    
        printf("\n");

        for (int i = 0; i < nr_workeri; i++) {
            MPI_Send(&nr_workeri0, 1, MPI_INT, v_rank_workeri[i], tag1, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);
            MPI_Send(v_workeri0, nr_workeri0, MPI_INT, v_rank_workeri[i], tag1, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);

            MPI_Send(&nr_workeri, 1, MPI_INT, v_rank_workeri[i], tag1, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);
            MPI_Send(v_rank_workeri, nr_workeri, MPI_INT, v_rank_workeri[i], tag1, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);

            MPI_Send(&nr_workeri2, 1, MPI_INT, v_rank_workeri[i], tag1, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);
            MPI_Send(v_workeri2, nr_workeri2, MPI_INT, v_rank_workeri[i], tag1, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);
        }

        //------------------------------------------------Realizarea Calculelor-----------------------------------------------
        int nr_elem_v1, N;
        int *v1;
        if (P == 0) {
            MPI_Recv(&nr_elem_v1, 1, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);
            v1 = (int *)malloc(nr_elem_v1 * sizeof(int));
            MPI_Recv(v1, nr_elem_v1, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);
            MPI_Recv(&N, 1, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);
        }
        else {
            MPI_Recv(&nr_elem_v1, 1, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);
            v1 = (int *)malloc(nr_elem_v1 * sizeof(int));
            MPI_Recv(v1, nr_elem_v1, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);
            MPI_Recv(&N, 1, MPI_INT, 2, tag2, MPI_COMM_WORLD, &status);
        }

        //scatter catre workeri
        int diferenta = nr_elem_v1 % nr_workeri;
        int nr_elem = nr_elem_v1 / nr_workeri;
        
        while (diferenta > nr_workeri - 1) {
            int rest = diferenta % nr_workeri;
            diferenta = diferenta / nr_workeri;
            nr_elem += diferenta;
            
            diferenta = rest;
        }
        int v_nr_elem[nr_workeri];
        for (int i = 0; i < nr_workeri; i++) {
            v_nr_elem[i] = nr_elem;
        }

        for (int i = 0; i < diferenta; i++) {
            v_nr_elem[i]++;
        }

        int count = 0;
        for (int i = 0; i < nr_workeri; i++) {
            int v_send[v_nr_elem[i]];
            for (int j = 0; j < v_nr_elem[i]; j++) {
                v_send[j] = v1[count];
                count++;
            }
            MPI_Send(&v_nr_elem[i], 1, MPI_INT, v_rank_workeri[i], tag1, MPI_COMM_WORLD);
            printf("M(1,%d)\n",v_rank_workeri[i]);
            MPI_Send(v_send, v_nr_elem[i], MPI_INT, v_rank_workeri[i], tag1, MPI_COMM_WORLD);
            printf("M(1,%d)\n",v_rank_workeri[i]);
        }

        //primire vector inapoi de la workeri
        count = 0;
        for (int i = 0; i < nr_workeri; i++) {
            int nr_elem;
            MPI_Recv(&nr_elem, 1, MPI_INT, v_rank_workeri[i], tag1, MPI_COMM_WORLD, &status);
            int v_recv[nr_elem];
            MPI_Recv(v_recv, nr_elem, MPI_INT, v_rank_workeri[i], tag1, MPI_COMM_WORLD, &status);
            for (int j = 0; j < nr_elem; j++) {
                v1[count] = v_recv[j];
                count++;
            }
        }

        if (P == 0) {
            //trimitere vector catre coordonator0
            MPI_Send(&nr_elem_v1, 1, MPI_INT, 0, tag1, MPI_COMM_WORLD);
            printf("M(1,0)\n");
            MPI_Send(v1, nr_elem_v1, MPI_INT, 0, tag1, MPI_COMM_WORLD);
            printf("M(1,0)\n");
        }
        else {
            //trimitere vector catre coordonator2
            MPI_Send(&nr_elem_v1, 1, MPI_INT, 2, tag1, MPI_COMM_WORLD);
            printf("M(1,2)\n");
            MPI_Send(v1, nr_elem_v1, MPI_INT, 2, tag1, MPI_COMM_WORLD);
            printf("M(1,2)\n");
        }
        //--------------------------------------------------------------------------------------------------------------------
    }
    if (rank == coordonator2) {
        //------------------------------------------------Citire fisier--------------------------------------------------------
        FILE *FILE_CLUSTER = fopen("cluster2.txt", "rt");
        int nr_workeri;
        fscanf(FILE_CLUSTER, "%d", &nr_workeri);
        int v_rank_workeri[nr_workeri];
        for (int i = 0; i < nr_workeri; i++)
            fscanf(FILE_CLUSTER, "%d", &v_rank_workeri[i]);
        //----------------------------------------------------------------------------------------------------------------------

        //Primeste mesaje cu lista de workeri de la ceilalti coordonatori
        int nr_workeri1, nr_workeri0;
        MPI_Recv(&nr_workeri1, 1, MPI_INT, 1, tag1, MPI_COMM_WORLD, &status);
        int v_workeri1[nr_workeri1];
        MPI_Recv(v_workeri1, nr_workeri1, MPI_INT, 1, tag1, MPI_COMM_WORLD, &status);

        MPI_Recv(&nr_workeri0, 1, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);
        int v_workeri0[nr_workeri0];
        MPI_Recv(v_workeri0, nr_workeri0, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);

        if (P == 1) {
            //send info despre 0 catre 1
            MPI_Send(&nr_workeri0, 1, MPI_INT, 1, tag2, MPI_COMM_WORLD);
            printf("M(%d,1)\n",rank);
            MPI_Send(v_workeri0, nr_workeri0, MPI_INT, 1, tag2, MPI_COMM_WORLD);
            printf("M(%d,1)\n",rank);
            //send info despre 1 catre 0
            MPI_Send(&nr_workeri1, 1, MPI_INT, 0, tag2, MPI_COMM_WORLD);
            printf("M(%d,0)\n",rank);
            MPI_Send(v_workeri1, nr_workeri1, MPI_INT, 0, tag2, MPI_COMM_WORLD);
            printf("M(%d,0)\n",rank);
        }

        //Trimitere lista workeri catre ceilalti coordonatori
        //coordonator1
        MPI_Send(&nr_workeri, 1, MPI_INT, 1, tag2, MPI_COMM_WORLD);
        printf("M(%d,1)\n",rank);
        MPI_Send(v_rank_workeri, nr_workeri, MPI_INT, 1, tag2, MPI_COMM_WORLD);
        printf("M(%d,1)\n",rank);
        //coordonator0
        MPI_Send(&nr_workeri, 1, MPI_INT, 0, tag2, MPI_COMM_WORLD);
        printf("M(%d,0)\n",rank);
        MPI_Send(v_rank_workeri, nr_workeri, MPI_INT, 0, tag2, MPI_COMM_WORLD);
        printf("M(%d,0)\n",rank);

        //afisare topologie
        printf("2 -> 0:");
        for (int i = 0; i < nr_workeri0; i++) {
            printf("%d",v_workeri0[i]);
            if (i != nr_workeri0 - 1)
                printf(",");
        }
        printf(" 1:");
        for (int i = 0; i < nr_workeri1; i++) {
            printf("%d",v_workeri1[i]);
            if (i != nr_workeri1 - 1)
                printf(",");
        }
        printf(" 2:");
        for (int i = 0; i < nr_workeri; i++) {
            printf("%d",v_rank_workeri[i]);
            if (i != nr_workeri - 1)
                printf(",");
        }
        printf("\n");

        for (int i = 0; i < nr_workeri; i++) {
            MPI_Send(&nr_workeri0, 1, MPI_INT, v_rank_workeri[i], tag2, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);
            MPI_Send(v_workeri0, nr_workeri0, MPI_INT, v_rank_workeri[i], tag2, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);
            
            MPI_Send(&nr_workeri1, 1, MPI_INT, v_rank_workeri[i], tag2, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);
            MPI_Send(v_workeri1, nr_workeri1, MPI_INT, v_rank_workeri[i], tag2, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);

            MPI_Send(&nr_workeri, 1, MPI_INT, v_rank_workeri[i], tag2, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);
            MPI_Send(v_rank_workeri, nr_workeri, MPI_INT, v_rank_workeri[i], tag2, MPI_COMM_WORLD);
            printf("M(%d,%d)\n",rank,v_rank_workeri[i]);
        }
    
        //------------------------------------------------Realizarea Calculelor-----------------------------------------------
        int nr_elem_v2, nr_elem_v1, N;
        int *v2;
        int *v1;
        if (P == 0) {
            MPI_Recv(&nr_elem_v2, 1, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);
            v2 = (int *)malloc(nr_elem_v2 * sizeof(int));
            MPI_Recv(v2, nr_elem_v2, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);
            MPI_Recv(&N, 1, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);
        }
        else {
            //primeste info despre 1
            MPI_Recv(&nr_elem_v1, 1, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);
            v1 = (int *)malloc(nr_elem_v1 * sizeof(int));
            MPI_Recv(v1, nr_elem_v1, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);
            MPI_Recv(&N, 1, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);

            //primeste info despre 2
            MPI_Recv(&nr_elem_v2, 1, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);
            v2 = (int *)malloc(nr_elem_v2 * sizeof(int));
            MPI_Recv(v2, nr_elem_v2, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);
            MPI_Recv(&N, 1, MPI_INT, 0, tag0, MPI_COMM_WORLD, &status);

            //trimte info catre 1
            //coordonator1
            MPI_Send(&nr_elem_v1, 1, MPI_INT, 1, tag2, MPI_COMM_WORLD);
            printf("M(2,1)\n");
            MPI_Send(v1, nr_elem_v1, MPI_INT, 1, tag2, MPI_COMM_WORLD);
            printf("M(2,1)\n");
            MPI_Send(&N, 1, MPI_INT, 1, tag2, MPI_COMM_WORLD);
            printf("M(2,1)\n");
        }
        
        //scatter catre workeri
        int diferenta = nr_elem_v2 % nr_workeri;
        int nr_elem = nr_elem_v2 / nr_workeri;
        
        while (diferenta > nr_workeri - 1) {
            int rest = diferenta % nr_workeri;
            diferenta = diferenta / nr_workeri;
            nr_elem += diferenta;  
            
            diferenta = rest;
        }
        int v_nr_elem[nr_workeri];
        for (int i = 0; i < nr_workeri; i++) {
            v_nr_elem[i] = nr_elem;
        }

        for (int i = 0; i < diferenta; i++) {
            v_nr_elem[i]++;
        }

        int count = 0;
        for (int i = 0; i < nr_workeri; i++) {
            int v_send[v_nr_elem[i]];
            for (int j = 0; j < v_nr_elem[i]; j++) {
                v_send[j] = v2[count];
                count++;
            }
            MPI_Send(&v_nr_elem[i], 1, MPI_INT, v_rank_workeri[i], tag2, MPI_COMM_WORLD);
            printf("M(2,%d)\n",v_rank_workeri[i]);
            MPI_Send(v_send, v_nr_elem[i], MPI_INT, v_rank_workeri[i], tag2, MPI_COMM_WORLD);
            printf("M(2,%d)\n",v_rank_workeri[i]);
        }

        //primire vector inapoi de la workeri
        count = 0;
        for (int i = 0; i < nr_workeri; i++) {
            int nr_elem;
            MPI_Recv(&nr_elem, 1, MPI_INT, v_rank_workeri[i], tag2, MPI_COMM_WORLD, &status);
            int v_recv[nr_elem];
            MPI_Recv(v_recv, nr_elem, MPI_INT, v_rank_workeri[i], tag2, MPI_COMM_WORLD, &status);
            for (int j = 0; j < nr_elem; j++) {
                v2[count] = v_recv[j];
                count++;
            }
        }
        if(P == 1) {
            //primeste vector inapoi de la 1
            MPI_Recv(&nr_elem_v1, 1, MPI_INT, coordonator1, tag1, MPI_COMM_WORLD, &status);
            MPI_Recv(v1, nr_elem_v1, MPI_INT, coordonator1, tag1, MPI_COMM_WORLD, &status);
    
            //trimite la 0
            MPI_Send(&nr_elem_v1, 1, MPI_INT, 0, tag2, MPI_COMM_WORLD);
            printf("M(2,0)\n");
            MPI_Send(v1, nr_elem_v1, MPI_INT, 0, tag2, MPI_COMM_WORLD);
            printf("M(2,0)\n");
        }
                
        //trimitere vector catre coordonator0
        MPI_Send(&nr_elem_v2, 1, MPI_INT, 0, tag2, MPI_COMM_WORLD);
        printf("M(2,0)\n");
        MPI_Send(v2, nr_elem_v2, MPI_INT, 0, tag2, MPI_COMM_WORLD);
        printf("M(2,0)\n");
        //--------------------------------------------------------------------------------------------------------------------
    }

    else if (rank != 0 && rank != 1 && rank != 2){
    //--------------------------------------------------recive topologie-----------------------------------------------------
    int nr_workeri0, nr_workeri1, nr_workeri2;
    //recive coordonator0
    MPI_Recv(&nr_workeri0, 1, MPI_INT, MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &status);
    int my_coordonator = status.MPI_SOURCE;
    int my_tag = status.MPI_TAG;
    int v_workeri0[nr_workeri0];
    MPI_Recv(v_workeri0, nr_workeri0, MPI_INT, my_coordonator, my_tag, MPI_COMM_WORLD, &status);

    //recive coordonator1
    MPI_Recv(&nr_workeri1, 1, MPI_INT, my_coordonator, my_tag, MPI_COMM_WORLD, &status);
    int v_workeri1[nr_workeri1];
    MPI_Recv(v_workeri1, nr_workeri1, MPI_INT, my_coordonator, my_tag, MPI_COMM_WORLD, &status);

    //recive coordonator2
    MPI_Recv(&nr_workeri2, 1, MPI_INT, my_coordonator, my_tag, MPI_COMM_WORLD, &status);
    int v_workeri2[nr_workeri2];
    MPI_Recv(v_workeri2, nr_workeri2, MPI_INT, my_coordonator, my_tag, MPI_COMM_WORLD, &status);

    
    //--------------------------------------------------------------------------------------------------------------------------

    //-------------------------------------------------afisare topologie--------------------------------------------------------
    printf("%d -> 0:", rank);
        for (int i = 0; i < nr_workeri0; i++) {
            printf("%d",v_workeri0[i]);
            if (i != nr_workeri0 - 1)
                printf(",");
        }
        printf(" 1:");
        for (int i = 0; i < nr_workeri1; i++) {
            printf("%d",v_workeri1[i]);
            if (i != nr_workeri1 - 1)
                printf(",");
        }
        printf(" 2:");
        for (int i = 0; i < nr_workeri2; i++) {
            printf("%d",v_workeri2[i]);
            if (i != nr_workeri2 - 1)
                printf(",");
        }
        printf("\n");
    //--------------------------------------------------------------------------------------------------------------------------
    
    //-------------------------------------------------realizarea calculelor----------------------------------------------------
    int nr_elem;
    MPI_Recv(&nr_elem, 1, MPI_INT, my_coordonator, my_tag, MPI_COMM_WORLD, &status);
    int v[nr_elem];
    MPI_Recv(v, nr_elem, MPI_INT, my_coordonator, my_tag, MPI_COMM_WORLD, &status);
    
    for(int i = 0; i < nr_elem; i++)
        v[i] = v[i] * 2;
    

    //send vector inapoi la coordonator
    MPI_Send(&nr_elem, 1, MPI_INT, my_coordonator, my_tag, MPI_COMM_WORLD);
    printf("M(%d,%d)\n",rank, my_coordonator);
    MPI_Send(v, nr_elem, MPI_INT, my_coordonator, my_tag, MPI_COMM_WORLD);
    printf("M(%d,%d)\n",rank, my_coordonator);
    
    //--------------------------------------------------------------------------------------------------------------------------
    }
    MPI_Finalize();
}