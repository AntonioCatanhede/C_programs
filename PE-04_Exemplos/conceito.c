#include<stdio.h>

int main() {
	float nota;

	printf(" Informe a nota: ");
	scanf("%f", &nota);

	if (nota >= 9) {
		printf(" Conceito A \n");
	} else if (nota >= 8) {
		printf(" Conceito B \n");
	} else if (nota >= 7) {
		printf(" Conceito C \n");
	} else {
		printf(" Reprovado \n");
	}
	return 0;
}
