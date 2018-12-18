#include <stdio.h>
#include <string.h>

struct cadastro{
	char nome[50];
	char endereco[80];
	int idade;
};

int main() {
	struct cadastro c;         // define variável do tipo da estrutura
	strcpy(c.nome, "Carlos");  // atribui valor aos campos
	strcpy(c.endereco, "Avenida Brasil, 1082");
	c.idade = 18;

	printf("Dados Pessoais \nNome: %s; Idade: %d anos;\n", c.nome, c.idade); 
	printf("Endereço: %s.\n", c.endereco); 
	return 0;
}
