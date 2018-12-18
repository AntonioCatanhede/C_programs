#include <stdio.h>

int main() {
	float anos = 0, dias = 0;

	printf("\n Digite sua idade em anos: ");
	scanf("%f", &anos);
	dias = anos * 365;
	printf(" Sua idade em dias é: %.0f dias\n\n", dias);

	return 0;
}
