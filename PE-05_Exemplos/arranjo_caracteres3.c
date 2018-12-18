#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char nome[100];
	
	fgets(nome, 100, stdin); /* Le string */
	printf("O nome digitado foi %s (%lu caracteres)\n", nome, strlen(nome)); 

	return 0;
}
