#include <stdio.h>

int main() {
	// Início do programa
	printf("Exemplo de Sequência\n\n");
	int A, B, K;

	// Ler os valores que serão atribuídos a A e B
	printf("Informe um valor inteiro para A: ");
	scanf("%i", &A);
	printf("Informe um valor inteiro para B: ");
	scanf("%i", &B);

	// Exibir os valores originais de A e B
	printf("Valores originais: \n");
	printf("A = %i\n", A);
	printf("B = %i\n", B);

	// Atribuir o valor de A à variável K (cópia)
	K = A;

	// Atribuir o valor de B à variável A
	A = B;

	// Atribuir o valor de K à variável B
	B = K;

	// Exibir os valores de A e B após a troca
	printf("Valores após a troca: \n");
	printf("A = %i\n", A);
	printf("B = %i\n", B);

	// Fim do programa
	return 0;
}
