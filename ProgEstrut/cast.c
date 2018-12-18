#include <stdio.h>

int main() {
	float r1 = 7 / 2;
	float r2 = ((float) 7) / 2;
	float r3 = 7 / ((float) 2);
	float r4 = ((float) 7) / ((float) 2);
	float r5 = (float) 7 / 2;     // typecast tem precedência
	float r6 = (float) (7 / 2); // sobre o operador de divisão.

	printf("\n Saída:\n");
	printf("\n %.1f %.1f %.1f", r1, r2, r3);
	printf("\n %.1f %.1f %.1f\n\n", r4, r5, r6);

	return 0;
}
