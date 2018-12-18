#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	float f1 = 27, f2 = 13, *pf1, *pf2, **ppf1, **ppf2;

	pf1 = &f1;
	pf2 = &f2;
	printf("%.2f %2.f\n", *pf1, *pf2);

	ppf1 = &pf1;
	ppf2 = &pf2;
	
	**ppf1 = *pf1 - 1;
	**ppf2 = *pf2 + 1;

	printf("%.2f %2.f\n", **ppf1, **ppf2);

	return 0;
}
