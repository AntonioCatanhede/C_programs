#include<stdlib.h>
#include<stdio.h>
#include<time.h>
// #include "/home/antonio/Dropbox/UFABC/UFABC_2018_3/ProgEstrut/common/pe_utility.h"
#include <math.h>

//para compilar:
//gcc ../common/pe_utility.c pointerSquareVector.c -o pointerSquareVector -lm
int upper, lower;
// void triangular_matrix (int num_linhas, int (*Matriz)[num_linhas]);
void triangular_matrix (int *Matriz, int num_linhas);

int main(int argc, char const *argv[]){

    int num_linhas , Matriz[num_linhas][num_linhas];
    srand(time(NULL));
    printf("∗∗∗ Matriz Triangular de Inteiros ∗∗∗\n");
    printf("Informe a dimensão: n = ");
    scanf("%d", &num_linhas);
    printf("Informe a faixa de valores: [a, b]: ");
    scanf("%d %d", &lower, &upper);

    
    triangular_matrix((int *)Matriz, num_linhas);
    // printf("O ultimo elemento de M é: %d\n", Matriz[1][1]);

    
	// for(int i = 0; i < num_linhas; i++) {

    //     printf("[ ");
    //     for(int j = 0; j < num_linhas; j++){
    //         printf("%d ", Matriz[i][j]);
    //     }
    //     printf("]\n");
	// }

    // for(int i = 0; i < num_linhas; i++) {

    //     printf("[ ");
    //     int posicao;
    //     for(int j = 0; j < num_linhas; j++){
    //         posicao = i*j;
    //         printf("%d ", *(M+posicao));
    //     }
    //     printf("]\n");
	// }
	


    return 0;
}
void triangular_matrix(int *Matriz, int num_linhas){
    printf("---------------------------------------------");

    printf("\nMatriz de inteiros aleatórios entre [%d, %d]:\n",lower, upper);
    for (int i =0; i < num_linhas; i++){
        printf("| ");
        for (int j =0; j < num_linhas; j++){
            *(Matriz + i*num_linhas + j) = (rand() % (upper - lower + 1)) + lower;
            printf("%3d ", *(Matriz + i*num_linhas + j));
        }
        printf("|\n");
    }
    printf("\nMatriz triangular superior:\n");

    for (int i =0; i < num_linhas; i++){
        printf("| ");
        for (int j =0; j < num_linhas; j++){
            if(i>j){
                *(Matriz + i*num_linhas + j) = 0;
            }
            printf("%3d ", *(Matriz + i*num_linhas + j));
        }
        printf("|\n");
        
    }

}
// void triangular_matrix (int num_linhas, int (*Matriz)[num_linhas]){

//     for (int i =0; i < num_linhas; i++){
//         printf("[ ");
//         for (int j =0; j < num_linhas; j++){
//             Matriz[i][j]  = (rand() % (upper - lower + 1)) + lower;
//             // Matriz[i][j] = 1;
//             printf("%3d ", Matriz[i][j]);
//         }
//         printf("]\n");
        
//     }
//     printf("\n");

    // for (int i =0; i < num_linhas; i++){
    //     printf("[ ");
    //     for (int j =0; j < num_linhas; j++){
    //         if(i>j){
    //             Matriz[i][j]  = 0;
    //         }
    //         printf("%3d ", Matriz[i][j]);
    //     }
    //     printf("]\n");
        
    // }

// }
