#include <stdio.h>

int main() {
	// tamanho de campos na impressão
	printf("\n %2d" , 350);

	// arredondamento
	printf("\n %4.2f" , 3456.78);

	// alinhamento
	printf("\n %10.2f %10.2f %10.2f", 8.0, 15.3, 584.13);

	// complemento de zeros a esquerda
	printf("\n %04d" , 21);

	// impressão de caracteres
	printf("%d %c %x %o \n\n" , 'A', 'A', 'A', 'A');

	return 0;
}
