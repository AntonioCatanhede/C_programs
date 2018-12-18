#include<stdio.h>
#include<stdlib.h>

/* Protótipo */
int soma(int **mat, int x, int y);

int main(int argc, char *argv[]) {
	int **mat;
	//x eh o nº de linhas, y eh o nº de colunas
	int x, y, i, j;
	scanf("%d", &x);
	scanf("%d", &y);
	
	mat = (int**) malloc(x * sizeof(int*));
	if (!mat) {
		printf("Memória insuficiente.\n");
		return -1;
	}

	for (i = 0; i < x; i++) {
		mat[i] = (int*) malloc(y * sizeof(int));

		if (!mat[i]) {
			printf("Memória insuficiente.\n");
			return -1;
		}
	}

	for (i = 0; i < x; i++) { 
		for(j = 0; j < y; j++) {
			scanf("%d", &mat[i][j]);
		}
	}

	printf("Soma dos Elementos: %d\n", soma(mat, x, y));

	for (int i =0; i < x; i++){
        printf("| ");
        for (int j =0; j < y; j++){
    
            printf("%3d ", mat[i][j]);
        }
        printf("|\n");
        
    }

	for (i = 0; i < x; i++) {
		free(mat[i]);
	}


	free(mat);
	return 0;
}
	
int soma(int **mat, int x, int y) {
	int i, j, soma = 0;
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++) {
			soma += mat[i][j];
		}
	}
	return soma;
}
