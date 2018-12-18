#include <stdio.h>

int main() {
	char var1;
	int var2;
	double var3;
	char *ponteiro1;
	int *ponteiro2;
	double *ponteiro3;

	printf("Tamanhos %ld %ld %ld\n", 
			sizeof(var1),
			sizeof(var2),
			sizeof(var3));
	printf("Tamanhos %ld %ld %ld\n", 
			sizeof(ponteiro1),
			sizeof(ponteiro2),
			sizeof(ponteiro3));
	return 0;
}
