#include <stdio.h>

size_t fib(int); /* prototipo */

int main() {
	int n;

	printf("n = "); scanf("%d", &n);
	printf("fib(%d) = %lu\n", n, fib(n));
	return 0;
}

size_t fib(int n) {
	if (n == 0 || n == 1) { /* ponto de parada */
		return n;
	}
	return fib(n - 1) + fib(n - 2); /* codigo recursivo */
}
