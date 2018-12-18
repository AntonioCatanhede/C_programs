#include<stdio.h>

int main() {
	int count = 100; 
	int *p;

	p = &count;

	printf("O endereço apontado por p é %p\n", p);

	return 0;
}
