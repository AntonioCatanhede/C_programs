#include <stdio.h>
#include<time.h>
#include<stdlib.h>

void selection_sort (int vetor[],int max) {
    int i, j, min, aux;

    /* Imprime o vetor ordenado */
    printf("Vetor sorteado:\n ");
    printf("[ ");
    for (i = 0; i < max; i++) {
        printf ("%d ",vetor[i]);
    }
    printf (" ]\n");
    

    for (i = 0; i < (max - 1); i++) {
        /* O minimo é o primeiro número não ordenado ainda */
        min = i;
        for (j = i+1; j < max; j++) {
            /* Caso tenha algum numero menor ele faz a troca do minimo*/
            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }
        /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
        if (i != min) {
                aux = vetor[i];
                vetor[i] = vetor[min];
                vetor[min] = aux;
        }
    }
    /* Imprime o vetor ordenado */
    printf("Vetor ordenado:\n ");
    printf("[ ");
    for (i = 0; i < max; i++) {
        printf ("%d ",vetor[i]);
    }
    printf (" ]\n");
}

int main () {
    int max, i;
    srand(time(NULL));

    /* Lê o máximo de algarismos do vetor*/
    printf("Tamanho do vetor: n= ");
    scanf ("%d",&max);

    int  vetor[max];
    /* Lê os algarismos do vetor */
    for (i = 0; i < max; i++) {
        vetor[i] = ((random()%50)*2) + 2 ;
    }

    selection_sort (vetor, max);
    return 0;
}

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>


// void selection_sort(int *v, int size);
// int main(int argc, char const *argv[])
// {
//     int *v, size;
//     srand(time(NULL));
//     printf("Tamanho do vetor: n= ");
//     scanf("%d", &size);

//     v = (int*)malloc(size*sizeof(int));

//     printf("Size = %d\n", size);

//     printf("Vetor sorteado:\n ");

//     printf("[ ");
//     for(int i=0; i<size; i++){
//         v[i] = ((random()%50)*2) + 2 ;
//         printf(" %d",v[i]);
//     }
//     printf("]\n");

//     selection_sort(v,size);

//     printf("Vetor ordenado:\n ");

//     printf("[ ");
//     for(int k=0; k<size; k++){

//         printf(" %d",v[k]);
//     }
//     printf(" ]\n");


//     return 0;
// }

// void selection_sort(int *v, int size){

//     int i, j, indice_do_minimo, temp;

//     for (i=0; i< size-1; i++){

//         indice_do_minimo = i;

//         for(j=i+1; j<size; j++){

//             if((*(v+j)) <  (*(v+indice_do_minimo))){

//                 indice_do_minimo =j;
//             }
//             if (i != indice_do_minimo) {
//                 temp = v[i];
//                 v[i] = v[indice_do_minimo];
//                 v[indice_do_minimo] = temp;
//             }
//         }

//     }
// }