#include <stdio.h>
#include <math.h>

/* Programa para calcular a volume de um círculo, dado o raio. */

double calcular_logaritmoBaseQualquer(double valor, double base) {
    double logaritmo = log10(valor)/log10(base);
    return logaritmo;
}


// double calcular_logaritmoE(double valor) {
  
//     double logaritmoE = log(valor);
//     return logaritmoE;
// }


int main() {
    
    double base;
    printf("Digite o valor da base: ");
    
    if (scanf("%lf", &base) == 0) {
        printf("Informe um valor numérico.\n");
        return -2; // código de erro pré-definido
    }
    if (base <= 0 || base == 1 ){

        printf("O valor deve ser maior que 0 e diferente de 1");
        return -2;
    }


    double valor;
    printf("Digite o valor: ");
    if (scanf("%lf", &valor) == 0) {
        printf("Informe um valor numérico.\n");
        return -2; // código de erro pré-definido
    }
    if (valor <= 0){

        printf("O valor deve ser maior que zero");
        return -2;
    }

    printf("Logaritmo de %lf na base %g = %.2lf \n",valor, base, calcular_logaritmoBaseQualquer(valor,base));
  

    return 0;
}