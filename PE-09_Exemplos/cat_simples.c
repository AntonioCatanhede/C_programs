#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[]) {

	FILE *fp; char ch;

	if (argc != 2){
		printf ("Uso: cat_simples <nome-do-arquivo>\n");
		return -2;
	}

	fp = fopen(argv[1], "r");

	if (!fp) {
		printf("O arquivo não pode ser aberto.\n");
		return -3;
	}

	while (!feof(fp)) {
		ch = fgetc(fp);
		if (ch != EOF) {
			printf("%c", ch);
		}
	}

	fclose(fp);
	return 0;
}
