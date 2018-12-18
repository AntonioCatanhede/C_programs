#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
    
int main() {
    int v[6][6] = {{1,3,4,6,8,9},{2,3,4,9,2,3},{3,3,3,6,4,3}, {8,8,7,9,9,2}, {9,8,2,3,4,1}, {1,1,3,8,7,9}};


//Letra A

    for (int i = 0 ; i<6; i++){
        for (int j = 0 ; j<6; j++){
            if(j==1){
                v[i][j] = 0;
            }
        }
    }
    void Imprime(int n, int matriz[n][n]){

        for (int i = 0 ; i<6; i++){
            for (int j = 0 ; j<6; j++){
            
                if(j==5){
                    printf("%d \t \n", matriz[i][j]);

                }
                else{
                    printf("%d \t", matriz[i][j]);
                }
                
            }
        }
    }

    Imprime(6, v);

    printf("\n");
    printf("\n");
    printf("\n");

    
// Letra B
    for (int i = 0 ; i<3; i++){
        v[i][4] = (v[i][4]) /2 ;
    }

    Imprime(6, v);

    printf("\n");
    printf("\n");
    printf("\n");

// Letra C

    for (int i = 0 ; i<6; i++){
        for (int j = 0 ; j<6; j++){
            
               v[i][j] = v[j][i];

        }
    }

    Imprime(6, v);

    printf("\n");
    printf("\n");
    printf("\n");






    return 0;
}
