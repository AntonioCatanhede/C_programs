#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME  50
#define MAX_END   80
#define MAX_FONE  15

char** cria_agenda(char **agenda, int n) {
}

void limpa_agenda(char **agenda, int n) {
}

void armazena_contato(char **agenda, int i, char *nome, char *endereco, char *fone) {
}

void imprime_contatos(char **agenda, int n) {
}

int main() {
	int n, i;
	
	char size[10];
	printf("Informe o nr de contatos: n = ");
	fgets(size, 10, stdin); 
	n = atoi(size); /* avoid mixing scanf() with fgets() */

	if (n <= 0) {
		printf("Valor invalido.\n");
		return -1;
	}

	char **agenda = cria_agenda(agenda, n);
	if (!agenda) {
		printf("Memoria insuficiente.\n");
		return -2;
	}

	char nome[MAX_NOME], endereco[MAX_END], fone[MAX_FONE];
	for (i = 0; i < n; i++) {
		printf("\nContato Nr %d\n", i+1);
		printf("Nome: "); fgets(nome, MAX_NOME, stdin);
		printf("End.: "); fgets(endereco, MAX_END, stdin);
		printf("Fone: "); fgets(fone, MAX_FONE, stdin);

		armazena_contato(agenda, i, nome, endereco, fone);
	}

	imprime_contatos(agenda, n);
	limpa_agenda(agenda, n);

	return 0;
}
