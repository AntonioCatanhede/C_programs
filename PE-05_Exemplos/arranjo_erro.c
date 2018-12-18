#include "../common/pe_utility.h"

int main() {
    char letras[] = {'A', 'B', 'C', 'D', 'E',
                     'F', 'G', 'H', 'I', 'J'} ;
    int sz = sizeof(letras) / sizeof(char);

    letras[12] = 'K'; /* comportamento inesperado */

    pe_print_chrvector(letras, sz);
    printf("%s\n", letras);

    return 0;
}
