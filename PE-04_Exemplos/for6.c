#include <stdio.h>

int main() {
	int i;

	for (i = 0; i < 10; i++) {
		if (i > 7 || i == 3) {
			continue;
		}
		printf(" %d\n", i);
	}
	return 0;
}
