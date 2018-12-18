#include<stdio.h>

int main() {
	int count = 100; 
	int *p;

	p = &count;

	printf("%d\n", *p);    /* Imprimira 100 */
	*p = 34;               /* Altera valor de count para 34 */
	printf("%d\n", count); /* Imprimira 34 */
	printf("%d\n", *p);    /* Imprimira 34 */

	return 0;
}
