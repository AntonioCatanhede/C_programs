#include <stdio.h>

int main() {
	int i = 0;
	printf("\n");
	printf(" %d\n", i++);
	printf(" %d\n\n", i--);

	printf(" %d\n", --i);
	printf(" %d\n\n", ++i);

	printf(" %d\n\n", i);

	i = 6;
	printf(" %f\n\n", ++i / 2.0);

	return 0;
}
