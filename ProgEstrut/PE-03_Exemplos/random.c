#include <stdio.h>
#include <time.h>
#include <stdlib.h>
    
int main() {
    // srand((unsigned int)time(NULL));// qual é a diferença pro de baixo?
    srand(time(NULL));
    int a=0;

    for(int i =1; i<=10; i++){

        a = rand() % (100+1);

        // condicao ? caso verdadeiro : caso falso
        (a%2 == 0) ? printf("%dº numero = %d é par \n", i, a) : printf("%dº numero = %d é ímpar \n", i, a); 

    }
    printf("%4d \n" , 350);
    printf("%030.6f \n" , 3456.78);
    printf("%30.6f \n" , 3456.78);
    printf("%10.2f %10.2f %10.2f \n", 8.0, 15.3, 584.13);
    printf("%04d \n" , 21);
    printf("%d %c %x %o \n\n" , 'A', 'A', 'A', 'A');

    int q = 9;
    printf("%.1f \n", (q++/2.0)); //variavel incrementada disponivel apenas na proxima linha

    int r = 9;
    printf("%.1f \n", (++r/2.0)); //variavel incrementada disponivel ja nesta linha

    printf("tamanho de int é %ld bytes \n", sizeof(int));
    printf("tamanho de double é %ld bytes \n", sizeof(double));
    printf("tamanho de float é %ld bytes \n", sizeof(float));
    printf("tamanho de char é %ld bytes \n", sizeof(char));

    return 0;
}
