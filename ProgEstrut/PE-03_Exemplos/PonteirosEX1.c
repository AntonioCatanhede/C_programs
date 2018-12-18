#include <stdio.h>
#include <time.h>
#include <stdlib.h>
    
int main() {
    int v[10];

    srand(time(NULL));
    for (int i = 0 ; i<10; i++){
        v[i]= rand() % 100 + 1;
    } 
    for (int i = 0 ; i<10; i++){
         printf("%d \n", v[i]);
    }

    for (int i = 9 ; i>=0; i--){
         printf("%d \n", v[i]);
    }

    return 0;
}
