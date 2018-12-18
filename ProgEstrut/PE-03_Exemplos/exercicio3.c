#include <stdio.h>
#include <math.h>

/* Programa para calcular a volume de um círculo, dado o raio. */

double calcular_logaritmo10(double valor) {
    double logaritmo = log10(valor);
    return logaritmo;
}


double calcular_logaritmoE(double valor) {
  
    double logaritmoE = log(valor);
    return logaritmoE;
}


int main() {
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
    double valor10 = calcular_logaritmo10(valor);
    printf("Logaritmo na base 10 = %.3lf \n", valor10);
    double valorE = calcular_logaritmoE(valor);
    printf("Logaritmo na base e = %.3lf \n", valorE);

    return 0;
}