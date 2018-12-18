#include <stdio.h>

int main() {
	FILE *fp; 
	int i, j, tam, aux;

	printf("Tamanho da Matriz Quadrada: ");
	scanf("%d", &tam);
	
	fp = fopen("matriz.txt", "w"); /* Abre para escrita */
	if (!fp) {
		printf("Erro na abertura do arquivo.\n");
		return -3;
	}
	fprintf(fp, "%d\n", tam); /* Armazena o tamanho da matriz */

	for (i = 0; i < tam; i++) { /* Lê matriz gravando no arquivo */ 
		for (j = 0; j < tam; j++) {
			printf("mat[%d][%d] = ", (i + 1), (j + 1));
			scanf("%d", &aux);
			fprintf(fp, "%d ", aux);
		}
		fprintf(fp, "\n");
	}

	fclose(fp); /* Fecha o arquivo */
	return 0;
}
