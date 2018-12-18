#include "../common/pe_utility2.h"

typedef struct {
	char nome[50];
	char endereco[80];
	int idade;
} cadastro;

int main() {
	cadastro c;                      // define variável do tipo da estrutura
	printf("Informe o nome: ");
	fgets(c.nome, 50, stdin);        // lê do teclado e armazena nos campos
	printf("Informe o endereco: ");
	fgets(c.endereco, 80, stdin);
	printf("Informe a idade: ");
	scanf("%d", &c.idade);
	printf("Dados Pessoais \nNome: %s; Idade: %d anos;\n", pe_strtrim(c.nome), c.idade); 
	printf("Endereço: %s.\n", pe_strtrim(c.endereco)); 
	return 0;
}
