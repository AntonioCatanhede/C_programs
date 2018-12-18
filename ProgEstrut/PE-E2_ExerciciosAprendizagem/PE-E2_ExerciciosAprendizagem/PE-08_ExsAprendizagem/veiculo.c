#include <stdio.h>
#include <string.h>

#define MAX_NOME   80
#define MAX_MODELO 50

typedef struct {
	char nome[MAX_NOME];
	char cpf[15];
} proprietario_t;

typedef struct {
	char modelo[MAX_MODELO];
	int ano;
	char placa[10];
	proprietario_t proprietario;
} veiculo_t;

int main() {
	/* Metodo 1: atribuicao campo a campo*/
	veiculo_t veiculo;
	strcpy(veiculo.modelo, "Corsa");
	veiculo.ano = 2010;
	strcpy(veiculo.placa, "HLP-3587");
	strcpy(veiculo.proprietario.nome, "Alan Turing");
	strcpy(veiculo.proprietario.cpf, "320.451.237-48");
	//fim metodo 1*/
	
	/* Metodo 2: atribuicao simplificada
	veiculo_t veiculo = { "Corsa", 2010, "HLP-3587",
                        { "Alan Turing", "320.451.237-48" }};
	//fim metodo 2*/

	printf("VEICULO:\n"
		   "  Modelo: %s\n"
		   "     Ano: %d\n"
		   "   Placa: %s\n\n", veiculo.modelo, veiculo.ano, veiculo.placa);
	printf("PROPRIETARIO:\n"
		   "    Nome: %s\n"
		   "     CPF: %s\n)", veiculo.proprietario.nome, veiculo.proprietario.cpf);

	return 0;
}
