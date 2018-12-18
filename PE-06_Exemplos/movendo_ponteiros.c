#include <stdio.h>

int main() {
	float v[] = {1.4, 1.5, 1.6, 1.7, 1.8};
	int sz = sizeof(v) / sizeof(float);
	
	// Posição inicial dos ponteiros
	float *p = v;
	float *q = &v[2];
	printf("*p = %g\t *q = %g\t q-p = %ld\n", *p, *q, q-p); 

	// Movendo os ponteiros
	p += sz - 1;
	q--;
	printf("*p = %g\t *q = %g\t q-p = %ld\n", *p, *q, q-p); 

	return 0;
}
