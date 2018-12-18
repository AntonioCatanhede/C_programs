#include <stdio.h>
#include <stdlib.h>

void troca(float *px, float *py);

int main(int argc, char const *argv[])
{
    float x,y;
    printf("Digite o valor de x: "); scanf("%f", &x);
    printf("Digite o valor de y: "); scanf("%f", &y);
    printf("\nAntes da troca\nx = %.2f e y = %.2f\n", x, y);

    troca(&x,&y);

        
    
    

    printf("\nDepois da troca\nx = %.2f e y = %.2f\n", x, y);


    return 0;
}

void troca(float *px, float *py){
    *px = *px + *py;
    *py = *px - *py;
    *px = *px - *py;

}