#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME  50
#define MAX_END   80
#define MAX_FONE  15

char** cria_agenda(char **agenda, int n) {
	int i;

	agenda = (char **) malloc(n * sizeof(char *));
	if (!agenda) return NULL;

	int sz = MAX_NOME + MAX_END + MAX_FONE; // concatena os campos
	for (i = 0; i < n; i++) {
		agenda[i] = (char *) malloc(sz * sizeof(char));
		if (!agenda[i]) return NULL;
	}
	return agenda;
}

void limpa_agenda(char **agenda, int n) {
	int i;

	for(i = 0; i < n; i++) {
		free(agenda[i]);
	}
	free(agenda);
}

// Para armazenar os campos adequadamente em uma matriz de char, agenda deveria
// ser do tipo char***, tornando a implementação mais difícil. Neste exercício,
// vamos concatenar os campos (strcat) usando um caractere de separação: ';' 
// para facilitar. Problemas como este são melhor resolvidos com o uso de structs.
void armazena_contato(char **agenda, int i, char *nome, char *endereco, char *fone) {
	nome[strlen(nome)-1] = '\0'; // retira o caractere de quebra de linha
	strcpy(agenda[i], nome);
	strcat(agenda[i], ";");

	endereco[strlen(endereco)-1] = '\0';
	strcat(agenda[i], endereco);
	strcat(agenda[i], ";");

	fone[strlen(fone)-1] = '\0';
	strcat(agenda[i], fone);
}

void imprime_contatos(char **agenda, int n) {
	int i;
	printf("\nLista de contatos:\n");
	for (i = 0; i < n; i++) {
		printf("%3d: %s\n", i+1, agenda[i]);
	}
}

int main() {
	int n, i;
	
	char size[10];
	printf("Informe o nr de contatos: n = ");
	fgets(size, 10, stdin); 
	n = atoi(size); /* converte alfa para inteiro */

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
