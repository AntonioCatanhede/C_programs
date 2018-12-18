#include<stdio.h>

int main() {
	char letra = 'B';

	switch (letra) {
		default:  printf(" Entrou em Default \n");
		case 'A': printf(" Entrou em A \n"); break;
		case 'B': printf(" Entrou em B \n"); break;
		case 'C': printf(" Entrou em C \n"); break;
		case 'D': printf(" Entrou em D \n"); break;
	}
	return 0;
}
