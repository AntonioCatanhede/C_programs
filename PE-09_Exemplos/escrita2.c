#include <stdio.h>
#define STR_TAM 100

int main() {
	char linguagens[5][20] = { "PASCAL", "C", "C++", "SmallTalk", "Java" };
	FILE *fp; int i; char str[STR_TAM];

	fp = fopen("linguagens.txt", "w+"); /* Abre para leitura/escrita */
	if (!fp) {
		printf("Erro na abertura do arquivo.\n");
		return -3;
	}

	for (i = 0;i < sizeof(linguagens)/sizeof(linguagens[i]); i++) { 
		fputs(linguagens[i], fp);
		fputc('\n', fp);
	}

	rewind(fp); /* Rebobina o arquivo */

	while (!feof(fp)) { /* Leitura completa */
		if (fgets(str, STR_TAM, fp) != NULL) {
			printf("%s", str);
		}
	}

	fclose(fp); /* Fecha o arquivo */
	return 0;
}
