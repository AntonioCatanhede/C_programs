#include <stdio.h>

void main() { // começo do programa
		
    // declaração das variáveis
	float N1, N2, N3, N4, MF;
		
	// mensagem para o usuário
	printf("Digite as quatro notas: \n");
		
	// entrada dos dados
	scanf("%f%f%f%f", &N1, &N2, &N3, &N4);
		
	// processamento
	MF = (N1 + N2 + N3 + N4) / 4;
		
	// saída da informação
	printf("Média final = %g\n", MF);
	
} // término do programa
