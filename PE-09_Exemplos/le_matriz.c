#include <stdio.h>

int main() {
	FILE *fp; 
	int i, j, tam, aux;

	fp = fopen("matriz.txt", "r"); /* Abre para leitura */
	
	if (!fp) {
		printf("Erro na abertura do arquivo.\n");
		return -3;
	}

	fscanf(fp, "%d", &tam); /* Le o tamanho */

	for (i = 0; i < tam; i++) { /* Imprime a matriz gravada no arquivo */ 
		for (j = 0; j < tam; j++) {
			fscanf(fp, "%d", &aux);
			fprintf(stdout, "%d ", aux);
		}
		fprintf(stdout, "\n");
	}

	fclose(fp); /* Fecha o arquivo */
	return 0;
}
