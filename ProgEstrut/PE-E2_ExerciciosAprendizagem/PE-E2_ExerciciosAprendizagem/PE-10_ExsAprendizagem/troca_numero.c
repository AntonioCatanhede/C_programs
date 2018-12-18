#include "../common/pe_utility2.h"
#include <math.h>

// EX4
int is_prime(int n) {    
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

	int i;
    for (i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
	}
	return 1;
}

void change_number(int *v, int n) {
	if (n == 0)
		return;

	change_number(v, n-1);
	if (is_prime(v[n-1]))
		v[n-1] = 0;
}

int main() {
	int v[] = {4, 8, 3, 11, 20, 29, 32};
	int sz = sizeof(v) / sizeof(int);

	pe_print_vector(v, sz, PE_INT, "Vetor original", NULL); 
	change_number(v, sz);
	pe_print_vector(v, sz, PE_INT, "\nVetor apos a troca", NULL); 
	
	return 0;
}
