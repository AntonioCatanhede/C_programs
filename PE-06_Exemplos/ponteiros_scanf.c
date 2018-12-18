#include<stdio.h>

int main() {
	int num;
	int *pt1 = &num;

	scanf("%d", pt1);
	printf("%d\n", num);  

	return 0;
}
