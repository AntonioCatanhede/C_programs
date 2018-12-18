#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void ImprimeMatriz(int v[6][6]);
    
int main() {

    int v[6][6]={{1,3,4,6,8,9},{2,3,4,9,2,3},{3,3,3,6,4,3},{8,8,7,9,9,2},{9,8,2,3,4,1},{1,1,3,8,7,9}};

    // A) Atribuir valores zero à coluna 2 
    for (int i = 0 ; i<6; i++){
        for (int j = 0; j<6; j++){
            if(j==1){
                v[i][j] = 0;
            }
        }
    }
    ImprimeMatriz(v);

    // B) Dividir por 2 os elementos das linhas 1 a 3, coluna 5
    for (int i = 0 ; i<6; i++){
        for (int j = 0; j<6; j++){
            if(i<3 && j==4){
                v[i][j] = (v[i][j])/2;
            }
        }
    }
    ImprimeMatriz(v);

    // C) Fazer A igual à sua transposta
    int v2[6][6];
    for (int i = 0 ; i<6; i++){
        for (int j = 0; j<6; j++){
                v2[i][j] = v[j][i];
        }
    }
    ImprimeMatriz(v2);

    // D) Recuperar a diagonal de A.
    printf("A diagonal é: ");
    for (int i = 0 ; i<6; i++){
        for (int j = 0; j<6; j++){
            if(j==i){
                printf("%d  ", v[i][j]);
            }
        }
    }
    printf("\n");


    return 0;
}


void ImprimeMatriz(int v[6][6]){
    for (int i = 0 ; i<6; i++){
        for (int j = 0; j<6; j++){
            if(j == 5 || j==0){
                if(j==0){
                    printf("|%d\t",v[i][j]);
                }
                else{
                    printf("%d|\n",v[i][j]);
                }
                
            }
            else{
                 printf("%d\t",v[i][j]);
            }
        }
    }
    printf("\n");
    printf("\n");
}