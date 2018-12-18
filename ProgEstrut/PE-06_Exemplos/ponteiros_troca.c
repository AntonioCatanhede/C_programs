#include<stdio.h>

void troca(int *, int *); /* Protótipo */

int main() {
	int x = 2, y = 4;
	printf("x = %d e y = %d\n", x, y);
	troca(&x, &y);   	
	printf("x = %d e y = %d\n", x, y);  

	return 0;
}

void troca(int *px, int *py){ /* Observe o uso do asterisco (*) */
	int temp = *px;
	*px = *py;
	*py = temp;
}
