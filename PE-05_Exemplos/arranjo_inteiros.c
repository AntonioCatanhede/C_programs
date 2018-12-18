#include <math.h>
#include "../common/pe_utility.h"

int main() {
	int sign[10];
	int sz = sizeof(sign) / sizeof(int);

	for (int i = 0; i < sz; i++) {
		sign[i] = pow(-1, i); 
	}
	pe_print_intvector(sign, sz);

	return 0;
}
