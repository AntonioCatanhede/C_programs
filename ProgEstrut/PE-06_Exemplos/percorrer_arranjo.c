#include <stdio.h>

int main() {
	int i, v[] = {1, 3, 5, 7, 9};
	int sz = sizeof(v) / sizeof(int);

	for (i = 0; i < sz; i++) {
		printf("%d\t", v[i]); 
	}
	printf("\n");

	return 0;
}
