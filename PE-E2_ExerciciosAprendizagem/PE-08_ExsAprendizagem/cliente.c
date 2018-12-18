#include <time.h>
#include "../common/pe_utility2.h"

#define MAX_NOME        80
#define MAX_LOGRADOURO 100

struct endereco {
	char logradouro[MAX_LOGRADOURO];
	int numero;
};

struct cliente {
	int codigo;
	char nome[MAX_NOME];
	struct endereco end;
};

int main() {
	struct cliente cli;

	srand(time(NULL));
	cli.codigo = rand() % 1000 + 1;

	printf("Informe nome: ");
	fgets(cli.nome, MAX_NOME, stdin);
	
	printf("  Logradouro: ");
	fgets(cli.end.logradouro, MAX_LOGRADOURO, stdin);
	
	printf("      Numero: ");
	scanf("%d", &cli.end.numero);

	printf("\nImprimindo dados do cliente %d:\n", cli.codigo);
	printf("        Nome: %s"
		   "    Endereco: %s, %d\n",
		   cli.nome, pe_strtrim(cli.end.logradouro), cli.end.numero);

	return 0;
}
