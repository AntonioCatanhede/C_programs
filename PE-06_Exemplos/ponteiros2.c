#include<stdio.h>

int main() {
	int x = 2; 
	int *p;

	p = &x;   /* Ponteiro recebe "o endereco de" x */
	*p = 4;   /* "O valor da variavel apontada por p" recebe 4 */

	printf("valor de x: %d\n", x);

	return 0;
}
