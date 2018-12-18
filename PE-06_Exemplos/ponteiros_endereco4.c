#include<stdio.h>

int main() {
	int n = 507;
	int *ptr;
	ptr = &n;

	*ptr = *ptr + 1;

	printf("%d\n", n); 
	printf("%d\n", *ptr); 
	
	return 0;
}
