#include <stdio.h>

int main() {
	int i;

	do {
		printf(" Digite um inteiro entre 0 e 10: ");
		scanf("%d", &i);
	} while (i < 0 || i > 10);

	printf(" Numero digitado: %d\n", i);
	return 0;
}
