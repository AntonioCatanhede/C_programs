#include<stdio.h>

void incrementa (int *x) {
	(*x)++;  /* Incrementa o valor da variavel apontada por x */
}

int main() {
	int x = 10;
	incrementa(&x);  /* Passei o endereco de x */ 	
	printf("valor de x: %d\n", x);  /* imprimira 11 */

	return 0;
}
