#include <stdio.h>

typedef enum {false, true} boolean;

int main() {
	boolean b;

	b = (3 > 1);
	if (b) {
		printf("3 > 1\n");
	}

	b = !b;

	if (b == true) {
		printf("3 <= 1\n");
	}

	return 0;
}
