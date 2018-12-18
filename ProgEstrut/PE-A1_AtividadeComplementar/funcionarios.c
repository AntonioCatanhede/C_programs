#include "../common/pe_utility2.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_CODIGO  50
#define MAX_NOME   100

typedef struct {
	size_t nr;
	char *nome;
	float salario;
} funcionario_t;

typedef struct {
	char* codigo;
	int nr_funcs;
	funcionario_t* funcionarios;
} departamento_t;

departamento_t* cria_departamento(int nr_funcs);
void cadastra_funcionarios(departamento_t *depto);
void lista_funcionarios(departamento_t *depto);
void exclui_departamento(departamento_t *depto);
float salario_medio(departamento_t *depto);
funcionario_t* maior_salario(departamento_t *depto);

int main() {
	int n;
	printf("  Nr de funcionarios: "); scanf("%d", &n);
	departamento_t *depto = cria_departamento(n); // aloca mem. p/ todas as estruturas

	printf("Cod. do departamento: "); scanf("%s", depto->codigo);
	cadastra_funcionarios(depto); // cadastra os funcionarios
	
	char c;
	printf("Listar funcionarios [y/n]? "); scanf(" %c", &c);
	if (c == 'y') lista_funcionarios(depto); // lista os funcionarios

	pe_print_hzline(50, '-', NULL);
	printf("Salario medio: %.2f\n", salario_medio(depto));
	funcionario_t *func = maior_salario(depto);
	printf("Maior salario: %.2f  (%s)\n", func->salario, func->nome); 

	exclui_departamento(depto); // libera mem. de todas as estruturas

	return 0;
}

departamento_t* cria_departamento(int nr_funcs){
	departamento_t *depto;
	depto = (departamento_t*) malloc(sizeof(departamento_t));
	depto -> codigo = (char*) malloc(MAX_CODIGO * sizeof(char));
	depto ->nr_funcs = nr_funcs;
	depto -> funcionarios = (funcionario_t*) malloc(MAX_NOME * sizeof(char));
	for (int i = 0; i < nr_funcs; i++){

		depto->funcionarios[i].nome = (char *) malloc(MAX_NOME * sizeof(char));

	}
	return depto;
}


void cadastra_funcionarios(departamento_t *depto){
	pe_print_hzline(50,'-', NULL);
	printf("Cadastro de funcionarios\n");
	pe_print_hzline(50, '-', NULL);

	for(int i; i < depto -> nr_funcs; i++) {
		printf("Funcionarios #d/n");
		printf("       NR:"); scanf("%lu", &depto->funcionarios[i].nr);
		printf("     Nome:"); scanf("%s", depto->funcionarios[i].nome);
		printf("  Salario:"); scanf("%f", &depto->funcionarios[i].salario);
		printf("\n");
	}

}

void lista_funcionarios(departamento_t *depto){


}

void exclui_departamento(departamento_t *depto){

	free(depto->codigo);
	for (int i = 0; i < depto -> nr_funcs; i++)
	  free(depto->funcionarios[i].nome);
	free(depto);
}

funcionario_t* maior_salario(departamento_t *depto){
	funcionario_t *p = depto->funcionarios;
	float max = p->salario;
	funcionario_t*pmax=p;

	for(int i =0; i<depto->nr_funcs; i++, p++){
		if(p->salario>max){
			max = p->salario;
			pmax=p;
		}
	}
  return pmax;
}

float salario_medio(departamento_t *depto){
  
}