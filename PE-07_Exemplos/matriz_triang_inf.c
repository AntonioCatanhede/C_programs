#include<stdio.h>
#include<stdlib.h>

/*Protótipo*/
int soma(int **mat, int tam);

int main(int argc, char *argv[]) {
	int **mat;
	int tam, i, j;
	scanf("%d", &tam);
	
	mat = (int**) malloc(tam * sizeof(int*));
	if (!mat) {
		printf("Memória insuficiente.\n");
		return -1;
	}

	for (i = 0; i < tam; i++) {
		mat[i] = (int*) malloc((i+1) * sizeof(int));

		if (!mat[i]) {
			printf("Memória insuficiente.\n");
			return -1;
		}
	}

	for (i = 0; i < tam; i++) { 
		for(j = 0; j < (i + 1); j++) {
			scanf("%d", &mat[i][j]);
		}
	}
	printf("Soma dos Elementos: %d\n", soma(mat, tam));

	for (i = 0; i < tam; i++) {
		free(mat[i]);
	}
	free(mat);
	return 0;
}
	
int soma(int **mat, int tam) {
	int i, j, soma = 0;
	for (i = 0; i < tam; i++){
		for (j = 0; j < (i + 1); j++) {
			soma += mat[i][j];
		}
	}
	return soma;
}
