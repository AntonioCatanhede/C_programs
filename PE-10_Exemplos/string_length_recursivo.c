#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

int lenght_string_iterative(char *s);
int lenght_string_recursive(char *s);

int main(int argc, char const *argv[])
{
    char s[MAX_LEN];
    int comprimento, u;
    printf("Digite uma frase: ");
    fgets(s,MAX_LEN,stdin);
    // scanf("%[^\n]s",s);

    printf("%s", s);

    u = (int)strlen(s);

    comprimento = lenght_string_iterative(s);

    printf("Funcao iterativa retorna comprimento de %d caracteres\n", comprimento);

    comprimento = lenght_string_recursive(s)-1;
    
    printf("Funcao recursiva retorna comprimento de %d caracteres\n", comprimento);

    return 0;
}

// versao iterativa
int lenght_string_iterative(char *s){
    int comprimento = 0;

    while(s[comprimento]!='\0'){
        comprimento++;
    }

    return comprimento-1; // o '-1' eh devido ao fato de fgets armazenar a quebra de linha '\n' na string
}

//versao recursiva; retorna a quantidade de caracteres da string, incluindo o '\n'
int lenght_string_recursive(char *s){

    if (s[0]=='\0'){
        return 0;
    }

    s = s + 1;

    return 1 + lenght_string_recursive(s);
}