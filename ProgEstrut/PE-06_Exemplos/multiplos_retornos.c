#include <stdio.h>

void divint(int dividendo,int divisor,int *quociente, int *resto){
	*quociente = dividendo / divisor;
	*resto = dividendo % divisor; /* divisão inteira */
}

int main() {
	int a, b;
	printf("Informe o dividendo: ");
	scanf("%d", &a);
	printf("Informe o divisor:   ");
	scanf("%d", &b);

	int q, r;
	divint(a, b, &q, &r);
	printf("Quociente = %d\nResto = %d\n", q, r);  
	return 0;
}
