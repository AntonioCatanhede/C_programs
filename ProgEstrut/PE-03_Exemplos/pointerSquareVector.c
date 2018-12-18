#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include "/home/antonio/Dropbox/UFABC/UFABC_2018_3/ProgEstrut/common/pe_utility.h"
#include <math.h>

//para compilar:
//gcc ../common/pe_utility.c pointerSquareVector.c -o pointerSquareVector -lm

void square_vector (int *v, int sz);
void inicializaVetorAleatorio (int *v, int sz);

int main(int argc, char const *argv[]){

    int n;
    srand(time(NULL));

    printf("digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    int Vetor[n], sz = n;

    inicializaVetorAleatorio(Vetor, sz);

    pe_print_intvector(Vetor, sz);

    // printf("[ ");
	// for(int i = 0; i < sz; i++) {
	// 	printf("%d ", Vetor[i]);
	// }
	// printf("]\n");


    square_vector(Vetor,sz);

    pe_print_intvector(Vetor, sz);

    // printf("[ ");
	// for(int i = 0; i < sz; i++) {
	// 	printf("%d ", Vetor[i]);
	// }
	// printf("]\n");

    return 0;
}

void inicializaVetorAleatorio (int *v, int sz){
    for (int i =0; i<sz; i++){
        *(v+i) = random() % (51); 
    }
}

void square_vector (int *v, int sz){
    for (int i =0; i<sz; i++){

        *(v+i) = (int)(pow((double)(*(v+i)), 2.0));

    }

}
