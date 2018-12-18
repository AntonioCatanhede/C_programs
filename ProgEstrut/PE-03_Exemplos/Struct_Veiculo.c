#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NOME 80
#define MAX_MODELO 50

int main(int argc, char const *argv[])
{
    typedef struct {
        char nome[MAX_NOME];
        char cpf[15];
    } proprietario_t;

    typedef struct {
        char modelo[MAX_MODELO];
        int ano;
        char placa[10];
        proprietario_t proprietario;
    } veiculo_t;

    veiculo_t carro;

    strcpy(carro.modelo, "Mercedão");

    carro.ano = 1975;

    strcpy(carro.placa,"HLP-3456");

    strcpy(carro.proprietario.nome, "Alan Turing");
    strcpy(carro.proprietario.cpf, "045.789.879-78");

    printf("VEICULO:\n");
    printf("  Modelo: %s\n", carro.modelo);
    printf("     Ano: %d\n", carro.ano);
    printf("   Placa: %s\n\n", carro.placa);
    printf("PROPRIETARIO:\n");
    printf("    Nome: %s\n", carro.proprietario.nome);
    printf("     CPF: %s", carro.proprietario.cpf);

    return 0;
}
