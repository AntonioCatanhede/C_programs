#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	int x;
	int *pi;
	scanf("%d", &x);
	pi = (int*) malloc(x * sizeof(int));

	if (pi == NULL) {
		printf("Memória insuficiente. Programa encerrado.\n");
		return -1;
	}

	pi[5] = 44; /* Considere x > 5*/

	/* Várias outras operações*/

	free(pi);
	return 0;
}
