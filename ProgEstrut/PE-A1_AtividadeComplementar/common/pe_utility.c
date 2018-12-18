#include "pe_utility.h"

void pe_print_intvector(int v[], int sz) {
	int i;

	printf("[ ");
	for(i = 0; i < sz; i++) {
		printf("%d ", v[i]);
	}
	printf("]\n");
}

void pe_print_chrvector(char v[], int sz) {
	int i;

	printf("[ ");
	for(i = 0; i < sz; i++) {
		printf("%c ", v[i]);
	}
	printf("]\n");
}
