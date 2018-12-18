#include "pe_utility2.h"

/********************************** FUNCTIONS *********************************/
void pe_print_vector(void *v, int sz, int type, char *label, char *format) {
	char fmt[30];

	if (format) {
		strcpy(fmt, format);
	} else {
		switch (type) {
			case PE_CHAR:   strcpy(fmt, "%c ");  break;
			case PE_INT:    strcpy(fmt, "%d ");  break;
			case PE_SIZE_T: strcpy(fmt, "%lu "); break;
			case PE_FLOAT:  strcpy(fmt, "%g ");  break;
			case PE_DOUBLE: strcpy(fmt, "%g ");  break;
		}
	}

	if (label) printf("%s:\n", label);
	printf("[ ");
	for(int i = 0; i < sz; i++) {
		switch (type) {
			case PE_CHAR:   printf(fmt, ((char*)v)[i]);   break;
			case PE_INT:    printf(fmt, ((int*)v)[i]);    break;
			case PE_SIZE_T: printf(fmt, ((size_t*)v)[i]); break;
			case PE_FLOAT:  printf(fmt, ((float*)v)[i]);  break;
			case PE_DOUBLE: printf(fmt, ((double*)v)[i]); break;
		}
	}	
	printf("]\n");
}

void pe_print_matrix(void *m, int n_rows, int n_cols, int type, char *label,
		char *format) {
	char fmt[30];

	if (format) {
		strcpy(fmt, format);
	} else {
		switch (type) {
			case PE_CHAR:   strcpy(fmt, "%c ");  break;
			case PE_INT:    strcpy(fmt, "%5d "); break;
			case PE_SIZE_T: strcpy(fmt, "%lu "); break;
			case PE_FLOAT:  strcpy(fmt, "%g ");  break;
			case PE_DOUBLE: strcpy(fmt, "%g ");  break;
		}
	}

	if (label) printf("%s:\n", label);
	for (int i = 0; i < n_rows; i++) {
		printf("|");
		for (int j = 0; j < n_cols; j++) {
			switch (type) {
				case PE_CHAR:   printf(fmt, ((char*)m)[i*n_cols+j]);   break;
				case PE_INT:    printf(fmt, ((int*)m)[i*n_cols+j]);    break;
				case PE_SIZE_T: printf(fmt, ((size_t*)m)[i*n_cols+j]); break;
				case PE_FLOAT:  printf(fmt, ((float*)m)[i*n_cols+j]);  break;
				case PE_DOUBLE: printf(fmt, ((double*)m)[i*n_cols+j]); break;
			}
		}
		printf("|\n");
	}
}

void pe_print_hzline(int length, char c, FILE *outfp) {
    if (!length) length = 80;
    if (!c) c = '-';
    if (!outfp) outfp = stdout;

    int i;
    for (i = 0; i < length; i++)
      fprintf(outfp, "%c", c);

    fprintf(outfp, "\n");
}

char* pe_strtrim(char *s) {
    char *s2 = s;
    int l = strlen(s2);

    while(isspace(s2[l-1]))
	   	s2[--l] = 0;

    while(*s2 && isspace(*s2))
	   	++s2, --l;

    memmove(s, s2, l+1);
    return s;
}
