#include<stdio.h>
#include<stdlib.h>
#define MAX_NOME  80
#define MAX_LOGRADOURO 100


// void troca(int *, int *); /* Protótipo */

// int main() {
// 	int x = 2, y = 4;
// 	printf("x = %d e y = %d\n", x, y);
// 	troca(&x, &y);   	
// 	printf("x = %d e y = %d\n", x, y);  

// 	return 0;
// }

// void troca(int *px, int *py){ /* Observe o uso do asterisco (*) */
// 	int temp = *px;
// 	*px = *py;
// 	*py = temp;
// }


struct endereco {
  char logradouro[MAX_LOGRADOURO];
  int numero;
};

struct cliente {
  int codigo;
  char logradouro[MAX_NOME];
  struct endereco end;
};

int main() {
  struct cliente meu_cliente = {};
  meu_cliente.codigo = 22;
  


  
	return 0;
}