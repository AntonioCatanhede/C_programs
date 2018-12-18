#include <stdio.h>

// EX1
double get_max(double v[], int n) {
	if (n == 1)
		return v[0];

	double max = get_max(v, n-1);
	return (max > v[n-1] ? max : v[n-1]);
}

int main() {
	double v[] = {4, -2.9, 3, 9.5, -1};
	int sz = sizeof(v) / sizeof(double);

	printf("%.2lf\n", get_max(v, sz));
	
	return 0;
}
