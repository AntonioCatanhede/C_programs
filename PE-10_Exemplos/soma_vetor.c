#include <stdio.h>

double sum_vector(double v[], int n) {
	int i;
	double sum = 0.0;
	for (i = 0; i < n; i++)
		sum += v[i];
	return sum;
}

int main() {
	double v[] = {1, 2, 3, 4.5, 5.5};
	int sz = sizeof(v) / sizeof(double);

	printf("%.2lf\n", sum_vector(v, sz));
	return 0;
}
