#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/******************************** DEFINITIONS *********************************/
#define PE_VOID 0
#define PE_CHAR 1
#define PE_INT 2
#define PE_SIZE_T 3
#define PE_FLOAT 4
#define PE_DOUBLE 5

/******************************** PROTOTYPES **********************************/
void pe_format_set(char *value);
void pe_print_vector(void *v, int sz, int type, char *label, char *format);
void pe_print_matrix(void *m, int n_rows, int n_cols, int type, char *label,
		char *format);
void pe_print_hzline(int length, char c, FILE *outfp);

char* pe_strtrim(char *s);
