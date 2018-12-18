#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	float *v;
	int tam, i;
	scanf("%d", &tam);
	v = (float*) malloc(tam * sizeof(float));

	if (!v) { /*Verifica se conseguiu alocar */
		printf("Memória insuficiente. Programa encerrado.\n");
		return -1;
	}

	for (i = 0; i < tam; i++) { /* Inicializa o arranjo */
		v[i] = 0;
	}
	/* Várias outras operações*/

	free(v); /* Libera a área de memória alocada */
	return 0;
}
