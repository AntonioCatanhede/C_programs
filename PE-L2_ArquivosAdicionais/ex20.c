#include <stdio.h>
#include <stdlib.h>

#define MAXLEN 100

int isinstr(const char *s, char c, int i) {
	// code here...
}

int main() {
	char *s = (char*) malloc (MAXLEN * sizeof(char));
	printf("Frase: "); fgets(s, MAXLEN, stdin);

	char c;
	printf("Caracter: "); scanf(" %c", &c);
	printf("%d\n", isinstr(s, c, 0));
		
	free(s);
	return 0;
}
