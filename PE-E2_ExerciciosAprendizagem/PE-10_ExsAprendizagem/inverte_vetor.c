#include "../common/pe_utility2.h"

void inv_vector(int *v, int left, int right) {
	if (left >= right)
		return;
	
	int aux;
	aux = v[left];
	v[left] = v[right];
	v[right] = aux;

	inv_vector(v, left+1, right-1);
}

int main() {
	int v[] = {4, 8, 3, 11, 20, 29};
	int sz = sizeof(v) / sizeof(int);

	pe_print_vector(v, sz, PE_INT, "Vetor original", NULL); 
	inv_vector(v, 0, sz-1);
	pe_print_vector(v, sz, PE_INT, "\nVetor apos a inversao", NULL); 
	
	return 0;
}
