#include <stdio.h>

size_t fat(int); /* prototipo */

int main() {
	int n;

	printf("n = "); scanf("%d", &n);
	printf("%d! = %lu\n", n, fat(n));
	return 0;
}

size_t fat(int n) {
	if (n == 0 || n == 1) {
		return 1; /* ponto de parada */
	}
	return n * fat(n - 1); /* codigo recursivo */
}
