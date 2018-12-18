#include<stdio.h>

int main(int argc, char *argv[]) {
	int matriz[2][3], i, j;

	for (i = 0; i < sizeof(matriz) / sizeof(matriz[i]); i++) {
		for (j = 0; j < sizeof(matriz[i]) / sizeof(int); j++) {
			printf("Digite a matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}	
	}

	for (i = 0; i < sizeof(matriz) / sizeof(matriz[i]); i++) {
		for (j = 0; j < sizeof(matriz[i]) / sizeof(int); j++) {
			printf("%d\t", matriz[i][j]);
		}	
		printf("\n");
	}

	return 0;
}
