#include "../common/pe_utility.h"

int main() {
	char vogais[] = {'A', 'E', 'I', 'O', 'U'};
	int sz = sizeof(vogais) / sizeof(char);

	char vogais_inv[sz];
	int i = 0;

	while(i < sz) {
		vogais_inv[i] = vogais[sz - i - 1];
		i++;
	}
	pe_print_chrvector(vogais, sz);
	pe_print_chrvector(vogais_inv, sz);

	return 0;
}
