#include <stdio.h>

// EX3
void dec2hexa(int x) {
	if (x > 0) {
		char r = x % 16;
		dec2hexa(x / 16);
		printf("%c", r < 10 ? '0' + r : 'A' + r - 10);
	}
}

int main() {
	int x;

	printf("x(10) = "); scanf("%d", &x);
	if (x <= 0) {
		printf("Valor invalido: entre um inteiro maior que zero.\n");
		return -1;
	}

	printf("x(16) = "); dec2hexa(x);
	printf("\n");

	return 0;
}
