#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int colunasA, linhasA, colunasB, linhasB, controle=1;
    
    //Controle para que a muntiplicacao possa ser realizada
    while(controle){
        printf("Escolha o numero de linhas da matriz A: ");
        scanf("%d", &linhasA);
        printf("Escolha o numero de colunas da matriz A: ");
        scanf("%d", &colunasA);
        printf("Escolha o numero de linhas da matriz B: ");
        scanf("%d", &linhasB);
        printf("Escolha o numero de colunas da matriz B: ");
        scanf("%d", &colunasB);
        if(colunasA != linhasB){
            printf("A multiplicação não é possível!\n\
            O nª de colunas de A difere do nº de linhas de B!\n");
        }
        else{
            controle=0;
        }
    }
    printf("\n\n");

    int A[linhasA][colunasA], B[linhasB][colunasB];
    srand((unsigned)time(NULL));

    //Gerando A com numero aleatorios no intervalo [0,10]
    for(int i=0; i <linhasA; i++){
        for(int j=0; j < colunasA; j++){
            A[i][j] = rand()%(11);

        }
    }

    //Imprimindo A
    for (int i = 0 ; i < linhasA; i++){
        for (int j = 0; j < colunasA; j++){
            if(j == colunasA-1 || j==0){
                if(j==0){
                    printf("|%d\t",A[i][j]);
                }
                else{
                    printf("%3d|\n",A[i][j]);
                }
            }
            else{
                 printf("%3d\t",A[i][j]);
            }
        }
    }
    printf("\n\n");
    
    //Gerando B com numero aleatorios no intervalo [0,10]
    for(int i=0; i < linhasB; i++){
        for(int j=0; j < colunasB; j++){
            B[i][j] = rand()%(11);
        }
    }

    //Imprimindo B
    for (int i = 0 ; i < linhasB; i++){
        for (int j = 0; j < colunasB; j++){
            if(j == colunasB-1 || j==0){
                if(j==0){
                    printf("|%d\t",B[i][j]);
                }
                else{
                    printf("%3d|\n",B[i][j]);
                }
            }
            else{
                 printf("%3d\t",B[i][j]);
            }
        }
    }

    //Fazendo A x B = C
    int C[linhasA][colunasB], acumulo;

    for(int i=0; i < linhasA; i++){
        for(int j=0; j < colunasB; j++){

            C[i][j] = 0;

            for(int k=0; k < colunasA; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    printf("\n\n");
    printf("O resultado de A x B é matriz:\n");

    //Imprimindo C
    for (int i = 0 ; i < linhasA; i++){
        for (int j = 0; j < colunasB; j++){
            if(j == colunasB-1 || j==0){
                if(j==0){
                    printf("|%d\t",C[i][j]);
                }
                else{
                    printf("%3d|\n",C[i][j]);
                }
            }
            else{
                 printf("%3d\t",C[i][j]);
            }
        }
    }
    printf("\n");


    return 0;
}

