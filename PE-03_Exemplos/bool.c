#include <stdio.h>

int main() {
	_Bool b = 1;

	if (b) {
		printf("Booleanos são aceitos em C99 e C11.\n"
		"Um _Bool tem tamanho de %lu bits.\n\n", sizeof(b) * 8);
	}
	return 0;
}
