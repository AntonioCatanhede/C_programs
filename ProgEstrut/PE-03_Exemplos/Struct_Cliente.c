#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NOME 80
#define MAX_LOGRADOURO 100

int main(int argc, char const *argv[])
{
    struct endereco {
        char logradouro[MAX_LOGRADOURO];
        int numero;
    };

    struct cliente {
        int codigo;
        char nome[MAX_NOME];
        struct endereco end;
    };

    struct cliente c;

    char nome[MAX_NOME], logradouro[MAX_LOGRADOURO];
    srand(time(NULL)); 
    c.codigo = (rand() % (100 - 1 + 1)) + 1;;

    printf("Informe nome: ");
    // fgets(c.nome, MAX_NOME, stdin);
    scanf("%[^\n]s", c.nome);
    // c.nome[strlen(c.nome)-1] = '\0';


    printf("  Logradouro: ");
    // fgets(c.end.logradouro, MAX_LOGRADOURO, stdin);
    scanf(" %[^\n]s", c.end.logradouro);
    // c.end.logradouro[strlen(c.end.logradouro)-1] = '\0';
    

    printf("      Numero: ");
    scanf("%d", &(c.end.numero));


    printf("\nImprimindo dados do cliente %d:\n ", c.codigo);

    printf("       Nome: %s\n", c.nome);
    printf("    Endereço: %s, %d\n", c.end.logradouro, c.end.numero);





    return 0;
}
