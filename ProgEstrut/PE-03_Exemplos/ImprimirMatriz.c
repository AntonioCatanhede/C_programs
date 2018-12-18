#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
    
int main() {
    int v[9][9];


    for (int i = 0 ; i<9; i++){
        for (int j = 0 ; j<9; j++){
            v[i][j] = (i+1)*(j+1);
        }
    }

    for (int i = 0 ; i<9; i++){
        for (int j = 0 ; j<9; j++){
          
            if(j==8){
                printf("%d \t \n", v[i][j]);

            }
            else{
                printf("%d \t", v[i][j]);
            }
            
        }
    }


    return 0;
}
