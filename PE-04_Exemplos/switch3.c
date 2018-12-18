#include<stdio.h>

int main() {
	char letra = 'b';

	switch (letra) {
		case 'A': printf(" Entrou em A \n"); break;
		case 'B': printf(" Entrou em B \n"); break;
		default:  printf(" Entrou em Default \n");
		case 'C': printf(" Entrou em C \n"); break;
		case 'D': printf(" Entrou em D \n"); break;
	}
	return 0;
}
