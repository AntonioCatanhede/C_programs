#include <stdio.h>

int main() {
	printf("Exemplo de Repetição\n\n");
	int A, B, Q, R;

	// Ler os valores que serão atribuídos a A e B
	printf("Informe um valor inteiro para A: ");
	scanf("%i", &A);
	printf("Informe um valor inteiro para B: ");
	scanf("%i", &B);

	// Inicializar o valor do quociente Q
	Q = 0;

	// Comparar A e B
	while (A >= B) { 
		// Atualizar o valor do dividendo A
		A -= B;
		// Atualizar o valor do quociente Q
		Q += 1;
	}

	// Atualizar o valor do resto R
	R = A;

	// Exibir o valor do resto R
	printf("O valor do resto da divisão é R = %d\n", R);

	return 0;
}
