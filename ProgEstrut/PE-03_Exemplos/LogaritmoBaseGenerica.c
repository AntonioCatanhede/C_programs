#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Calculate_Logarithm (double Base, double Logaritmando);

int main() {
    double base, Logaritmando, Logaritmo;

    printf("Entre com o numero da Base: ");
    scanf("%lf",&base);
    printf("Entre com o logaritmando: ");
    scanf("%lf",&Logaritmando);
    while((base <= 0.0 || base == 1) || Logaritmando <= 0.0){
        printf("Entre com uma base b no intervalo 0 < b < 1: ");
        scanf("%lf",&base);
        printf("Entre com um logaritmando l>0: ");
        scanf("%lf",&Logaritmando);
    }

    Logaritmo = Calculate_Logarithm(base,Logaritmando);

    printf("O logaritmo de %.2lf na base %.2lf é %.2lf \n", Logaritmando, base, Logaritmo);
    return 0;
}

double Calculate_Logarithm (double Base, double Logaritmando){
   
    double Logaritmo;

    (Base == 10.0) ? (Logaritmo = log10(Logaritmando)) : (Logaritmo = log10(Logaritmando)/log10(Base));

    return Logaritmo;
}


