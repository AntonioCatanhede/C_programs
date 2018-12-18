#include <stdio.h>
#include <math.h>

typedef struct {
	float peso;   /* em kg */
	float altura; /* em m  */
} fitness_t;

float imc(fitness_t); /* Prototipo */

int main() {
	int n, i;

	printf("Nr de pessoas: "); scanf("%d", &n);
	fitness_t fit[n];

	printf("\nEntre as medidas:\n");
	for (i = 0; i < n; i++) {
		printf("    Peso %d: ", i+1); scanf("%f", &fit[i].peso);
		printf("  Altura %d: ", i+1); scanf("%f", &fit[i].altura);
	}

	printf("\nIndice de massa corporal:\n");
	for (i = 0; i < n; i++) {
		printf("  Pessoa %d: %.2f\n", i+1, imc(fit[i]));
	}

	return 0;
}

float imc(fitness_t fit) {
	return fit.peso / pow(fit.altura, 2);
}
