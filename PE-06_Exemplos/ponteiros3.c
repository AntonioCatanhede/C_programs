#include<stdio.h>

int main(){
	int x = 2; 
	int *p1, *p2;

	/* Um ponteiro só recebe um endereço ou um outro ponteiro*/	
	p1 = &x;  
	p2 = p1; 
	
	printf("%p = %p? Apontam para o mesmo endereço?\n", p1, p2);  

	printf("Valor apontado por p1: %d\n", *p1);  /* Imprimira 2 */
	printf("Valor apontado por p2: %d\n", *p2);  /* Imprimira 2 */

	return 0;
}
