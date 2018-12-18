#include <stdio.h>

typedef enum { domingo, segunda, terca, quarta,
   			   quinta, sexta, sabado } diaSemana;

int main() {
	diaSemana d = segunda;  /* Poderia informar 1 */

	if (d == sabado || d == domingo) {
		printf("Fim de Semana!\n");
	} else {
		printf("Dia Util.\n");
	}

	return 0;
}
