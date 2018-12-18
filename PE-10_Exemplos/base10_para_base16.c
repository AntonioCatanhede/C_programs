#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dec2hexa (int n);

int main(int argc, char const *argv[])
{
    int numero;

    printf("Escreva um inteiro: ");
    scanf("%d", &numero);

    dec2hexa (numero);
    printf("\n");

    return 0;
}
void dec2hexa (int n){
    int resto;
    char hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    resto = n%16;
    
    if (n<16){
        printf("%c",hex[n]);
    }
    else{
        n = n/16;
        dec2hexa(n);
        printf("%c",hex[resto]);
    }

}