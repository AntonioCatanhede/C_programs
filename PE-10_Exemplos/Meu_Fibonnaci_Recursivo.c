#include <stdio.h>
#include <stdlib.h>

int fibonacci_recursivo(int itermo);

int main(int argc, char const *argv[]){
    int itermo, Fib_itermo;
    printf("Imprimir o termo: ");
    scanf("%d",&itermo);
    Fib_itermo =  fibonacci_recursivo(itermo);

    printf("fib(%d) = %d\n", itermo, Fib_itermo);
       
    return 0;
}

int fibonacci_recursivo(int itermo){

    if (itermo==0){
        return 0;
    }
    if (itermo==1){
        return 1;
    }

    return fibonacci_recursivo(itermo-2) + fibonacci_recursivo(itermo-1);
}