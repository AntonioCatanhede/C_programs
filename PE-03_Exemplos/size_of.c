#include <stdio.h>

int main() {
	printf("\n      Tipo de Dado    Tamanho em bits \n");
	printf(" ====================================== \n");

	printf("              _Bool: %8ld\n\n", sizeof(_Bool)*8);

	printf("               char: %8ld\n", sizeof(char)*8);
	printf("      unsigned char: %8ld\n", sizeof(unsigned char)*8);
	printf("        signed char: %8ld\n\n", sizeof(signed char)*8);

	printf("          short int: %8ld\n", sizeof(short int)*8);
	printf(" unsigned short int: %8ld\n", sizeof(unsigned short int)*8);
	printf("   signed short int: %8ld\n\n", sizeof(signed short int)*8);

	printf("                int: %8ld\n", sizeof(int)*8);
	printf("       unsigned int: %8ld\n", sizeof(unsigned int)*8);
	printf("         signed int: %8ld\n\n", sizeof(signed int)*8);

	printf("           long int: %8ld\n", sizeof(long int)*8);
	printf("  unsigned long int: %8ld\n", sizeof(unsigned long int)*8);
	printf("    signed long int: %8ld\n\n", sizeof(signed long int)*8);

	printf("             size_t: %8ld\n\n", sizeof(size_t)*8);

	printf("              float: %8ld\n", sizeof(float)*8);
	printf("             double: %8ld\n", sizeof(double)*8);
	printf("        long double: %8ld\n\n", sizeof(long double)*8);

	return 0;
}
