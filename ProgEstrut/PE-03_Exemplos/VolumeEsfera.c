#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, vol;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &a);

    while(a<=0){
        printf("Digite um valor maior que 0 para raio: ");
        scanf("%lf", &a);
    }

    vol = (4.0/3.0)*M_PI*pow(a,3);

    printf("O volume da esfera é %.2lf \n",vol);

    return 0;
}
