#include <stdio.h>

int arr[20] = {0};

int func1(int i) {
	arr[i] = 10;
}

int main() {
	func1(9);
	for(int i = 0; i < 20; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
