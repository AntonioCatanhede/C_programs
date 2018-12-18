#include<stdio.h>

int main(int argc, char *argv[]) {
	char placa[7] = {'B', 'A', 'D', '0', '0', '0', '7'};
	int i;

	for (i = 0; i < sizeof(placa) / sizeof(char); i++) {
		printf("%c", placa[i]); 
	}
    printf("\n");
	return 0;
}
