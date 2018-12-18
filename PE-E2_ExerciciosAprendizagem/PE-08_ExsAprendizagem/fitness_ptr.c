#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	float peso;   /* em kg */
	float altura; /* em m  */
} fitness_t;

float imc(fitness_t*); /* Prototipo */

int main() {
	int n, i;
	fitness_t *fit;

	printf("Nr de pessoas: "); scanf("%d", &n);
	fit = (fitness_t*) malloc(n * sizeof(fitness_t));

	printf("\nEntre as medidas:\n");

	/*
	 * Diferente metodos para acessar a estrutura (estude cada uma deles)
	 */
	
	/* 1. Usando o operador ponto (mais natural neste caso)*/
	for (i = 0; i < n; i++) {
		printf("    Peso %d: ", i+1); scanf("%f", &fit[i].peso);
		printf("  Altura %d: ", i+1); scanf("%f", &fit[i].altura);
	}

	printf("\nIndice de massa corporal:\n");
	for (i = 0; i < n; i++) {
		printf("  Pessoa %d: %.2f\n", i+1, imc(&fit[i]));
	} //fim metodo 1

	/* 2. Usando o operador seta (através de um ponteiro auxiliar)
	fitness_t *p;
	for (p = fit, i = 0; i < n; i++, p++) {
		printf("    Peso %d: ", i+1); scanf("%f", &p->peso);
		printf("  Altura %d: ", i+1); scanf("%f", &p->altura);
	}

	printf("\nIndice de massa corporal:\n");
	for (p = fit, i = 0; i < n; i++, p++) {
		printf("  Pessoa %d: %.2f\n", i+1, imc(p));
	} //fim metodo 2*/

	free(fit);
	return 0;
}

float imc(fitness_t *fit) {
	return fit->peso / pow(fit->altura, 2);
}
