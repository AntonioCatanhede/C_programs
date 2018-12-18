#include <stdio.h>

int main() {
	unsigned short int i = 0, j = 6e3;

	for (;;) { /* Sem condicao, admite-se sempre verdade */
		if (i % j == 0) {
			printf("\t%d\n", i);
		}
		i++;
	}
	return 0;
}
