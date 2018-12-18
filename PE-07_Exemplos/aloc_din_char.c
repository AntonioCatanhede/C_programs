#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	char *pc;
	pc = (char*) malloc(100 * sizeof(char));

	fgets(pc, 100, stdin);
	printf("%s", pc); 

	free(pc);
	return 0;
}
