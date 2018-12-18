#include <stdio.h>

int main() {
	int i = 0;
	
	do {
		printf("\t%d", ++i);
	} while (i != 1);

	printf("\n");
	return 0;
}
