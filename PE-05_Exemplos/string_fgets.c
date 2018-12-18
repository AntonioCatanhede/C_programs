#include <stdio.h>

int main() {
	char frase[101];

	printf("Digite uma frase: ");
	fgets(frase, 100, stdin);

	printf("  Frase digitada: ");
	fputs(frase, stdout);

	return 0;
}
