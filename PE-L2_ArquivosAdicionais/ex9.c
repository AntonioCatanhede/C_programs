#include "../common/pe_utility2.h"

#define MAX_CODIGO  50
#define MAX_NOME   100

typedef struct {
	size_t ra;
	char *nome;
	float media;
} aluno_t;

typedef struct {
	char* codigo;
	int nr_alunos;
	aluno_t* alunos;
} turma_t;

turma_t* cria_turma(int nr_alunos);
void cadastra_alunos(turma_t *turma);
void lista_turma(turma_t *turma);
void exclui_turma(turma_t *turma);

int main() {
	int n;
	printf(" Nr de alunos: "); scanf("%d", &n);
	turma_t *turma = cria_turma(n);

	printf("Cod. da turma: "); scanf("%s", turma->codigo);
	cadastra_alunos(turma);
	
	char c;
	printf("\nListar alunos [y/n]? "); scanf(" %c", &c);
	if (c == 'y') lista_turma(turma);
	exclui_turma(turma);

	return 0;
}
