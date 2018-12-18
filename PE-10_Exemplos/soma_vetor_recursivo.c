#include <stdio.h>

double sum_vector_rec(double v[], int n) {
	if (n == 0)
		return v[0];
	else
		return v[n] + sum_vector_rec(v, n-1);
}

int main() {
	double v[] = {1, 2, 3, 4.5, 5.5};
	int sz = sizeof(v) / sizeof(double);

	printf("%.2lf\n", sum_vector_rec(v, sz));
	return 0;
}
