#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int a,b;
    srand(time(NULL));
    //sorteia dois numeros, compara-os, e continua sorteando até algum dos dois ser igual a 100
    while (a<=99 && b<=99){
        a = rand() % 101;
        b = rand() % 101;
        a > b ? printf("O número maior é %d \n", a) : printf("O número maior é %d \n", b);
        printf("a = %d \nb = %d\n",a,b);
    }
    // char letras[]={33,'a', 'A', 'U', 0x68};

    // for(int i =0; i <5; i++){
    //     printf("%c \n", letras[i]);
    // }

    return 0;
}
