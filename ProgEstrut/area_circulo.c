#include <stdio.h>
#include <math.h>

/* Programa para calcular a área de um círculo, dado o raio. */
const double PI = 3.141592653589793;

double calcular_area(double raio) {
    return PI * pow(raio, 2);
}

int main(int argc, char *argv[]) {
    double raio, area;
    printf("Digite o raio: ");
    if (scanf("%lf", &raio) == 0) {
        printf("Informe um valor numérico.\n");
        return -2; // código de erro pré-definido
    }
    area = calcular_area(raio);
    printf("Area = %.3lf \n", area);
    return 0;
}
