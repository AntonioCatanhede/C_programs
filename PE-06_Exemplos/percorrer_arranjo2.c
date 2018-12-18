#include <stdio.h>

int main() {
	int v[] = {1, 3, 5, 7, 9};
	int sz = sizeof(v) / sizeof(int);
	int *p, *q;

	for (p = v, q = v + sz - 1; p <= q; p++) {
		printf("%d\t", *p); 
	}
	printf("\n");

	return 0;
}
