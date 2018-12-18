#include <stdio.h>

int main() {
	FILE *ponteiro_arquivo; char caractere;

	ponteiro_arquivo = fopen("./lista_compras.csv", "r");

	if (!ponteiro_arquivo){
		printf("O arquivo não pode ser aberto\n");
		return -1;
	}

	/*feof retorna '0' enquanto o EOF nao é alcancado  */
	while(!feof(ponteiro_arquivo)){
		caractere = fgetc(ponteiro_arquivo);
		/* EOF= (-1)*/
		if (caractere != EOF){
			printf("%c", caractere);
		}
	}

	fclose(ponteiro_arquivo);

	return 0;
}
