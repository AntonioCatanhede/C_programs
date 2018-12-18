#include "../common/pe_utility.h"
#include <string.h>

int main() {
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char s2[] = { 'Z', 'Z', 'Z', 'Z', 'Z' };
	int l2 = sizeof(s2)/sizeof(char); /* l2 = 5 */
	pe_print_chrvector(s2, l2);

	/* Copia as 4 primeiras posicoes de s1 em s2
	 * O terminador nulo não é copiado */
	memcpy(s2, s1, l2-1);
	pe_print_chrvector(s2, l2);

	/* Insere o terminador nulo */
	s2[l2-1] = '\0';
	pe_print_chrvector(s2, l2);

	return 0;
}
