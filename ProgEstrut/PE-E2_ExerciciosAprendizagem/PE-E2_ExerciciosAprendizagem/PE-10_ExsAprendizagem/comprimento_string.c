#include <stdio.h>

// EX2
int strlen_r(char *s, int i) {
	if (s[i] == '\0')
		return 0;
	else
		return 1 + strlen_r(s, i+1);
}

int main() {
	char *s = "Este eh um teste";
	printf("%d\n", strlen_r(s, 0));
	
	return 0;
}
