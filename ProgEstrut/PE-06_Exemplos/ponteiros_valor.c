#include<stdio.h>

void incrementa (int x) {
	x++;  /* Incrementa x */
}

int main(int argc, char *argv[]) {
	int x = 10;
	incrementa(x);  /* Passei o valor de x */ 	
	printf("valor de x: %d\n", x);  /* imprimira 10 */

	return 0;
}
