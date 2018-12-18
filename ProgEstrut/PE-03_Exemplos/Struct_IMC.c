#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(int argc, char const *argv[])
{
    typedef struct {
        float altura;
        float peso;
        float IMC;
    } indice_massa_corporal;

    int n;
    printf("Digite o numero de pessoas: ");scanf("%d", &n);
    indice_massa_corporal *pessoas;
    // indice_massa_corporal pessoas[n];
    
    pessoas = (indice_massa_corporal*)malloc(n*(sizeof(indice_massa_corporal)));

    for(int i=0; i<n; i++){
        printf("Digite a altura da %dª pessoa: ", (i+1));
        scanf("%f", &((pessoas[i]).altura));
        printf("Digite o peso da %dª pessoa: ", (i+1));
        scanf("%f", &((pessoas[i]).peso));
        // pessoas[i].IMC = ((pessoas[i]).peso)/ ((pessoas[i]).altura * (pessoas[i]).altura);
        (pessoas+i)->IMC = ((pessoas+i)->peso)/ (((pessoas+i)->altura) * ((pessoas+i)->altura));
    }
    
    printf("\nIndice de massa corporal:\n");

    for(int i=0; i<n; i++){
        // printf("Pessoa %d: %.2f\n",(i+1), pessoas[i].IMC);
        printf("Pessoa %d: %.2f\n",(i+1), (pessoas+i)->IMC);
    }

    free(pessoas);

    return 0;
}
