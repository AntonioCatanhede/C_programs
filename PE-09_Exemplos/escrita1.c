#include <stdio.h>

int main() {
	FILE *fp; char ch;
	/* "w+"" Cria um arquivo texto para leitura/escrita*/
	fp = fopen("alfabeto.txt", "w+"); /* Abre para leitura/escrita */
	if (!fp) {
		printf("Erro na abertura do arquivo.\n");
		return -3;
	}

	for (int i = 65; i <= 90; i++) { /* Grava de A a Z */
		fputc(i, fp);
	}

	rewind(fp); /* Rebobina o arquivo */



	while (!feof(fp)) { /* Leitura completa */
		ch = fgetc(fp);
		if (ch != EOF) {
			printf("%c", ch);
			// fprintf(stdout,"%c", ch);
		}
	}
	printf("\n");

	fclose(fp); /* Fecha o arquivo */
	return 0;
}
