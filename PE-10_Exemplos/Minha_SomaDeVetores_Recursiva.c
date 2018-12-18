#include<stdio.h>

double Soma_Vet_Recursiva(double v[], int n);

int main(int argc, char const *argv[])
{
    double v[] = {1, 2, 3, 4.5, 5.5, 9.0, 34.6, 14.6, 123.5}, soma;
    int size, size2, size3;

    size = sizeof(v)/sizeof(double);
    size2 = sizeof(v);
    size3 = sizeof(double);

    printf("O tamanho de v eh %d\n",size);
    printf("O tamanho de v eh %d\n",size2);
    printf("O tamanho de v eh %d\n",size3);


    soma = Soma_Vet_Recursiva(v,size-1);

    printf("A soma dos elementos é: %.2lf\n", soma);

    return 0;
}

double Soma_Vet_Recursiva(double v[], int n){

    if(n==0){
        return v[n];
    }

    return v[n] + Soma_Vet_Recursiva(v, n-1);
}