#include <stdio.h>

int main() {
	printf("Exemplo de Decisão\n\n");
	float A, B;

	// Ler os valores que serão atribuídos a A e B
	printf("Informe um valor para A: ");
	scanf("%f", &A);
	printf("Informe um valor para B: ");
	scanf("%f", &B);

	// Comparar A e B
	if (A > B) { 
		printf("O maior valor é A = %g\n", A);
	} else {
		printf("O maior valor (ou igual) é B = %g\n", B);
	}
	return 0;
}
