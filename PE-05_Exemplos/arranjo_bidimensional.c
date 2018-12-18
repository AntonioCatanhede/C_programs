#include<stdio.h>

int main(int argc, char *argv[]) {
	int matriz[3][2], i, j; /* Declara uma matriz 3x2 */

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			matriz[i][j] = 0;
		}	
	}

	matriz[0][0] = 1; /* Atribui o valor 1 ao canto superior esquerdo */
	matriz[2][1] = 7; /* Atribui o valor 7 ao canto inferior direito */	

	return 0;
}
