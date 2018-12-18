#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "../common/pe_utility.h"
#include <string.h>

int contaPalavras(char frase[]);
int main(){

    char frase[100], OI[100] = "OI";
    int qtdPalavras;
    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);
    qtdPalavras = contaPalavras(frase);
    printf("O numero de palavras da string %s é %d\n",frase, qtdPalavras);
    printf("O numero de caracteres da string %s é %d\n",frase, (int)strlen(frase));


    printf("O numero de palavras da string 'OI'  %d\n", (int)strlen(OI));

    return 0;
}

int contaPalavras(char frase[]){
    int contagem = 0;

    //O vetor frase tem tamanhoString+1 caracteres
  
    
    for(int i=0; i <strlen(frase)-1; i++){
        //Na tabela ASCII, space=32 e tab=9
        if(frase[i] == ' '  || frase[i] == '\t'){
            contagem = contagem;
        }
        else{
            if ( (frase[i+1] != ' ') && (frase[i+1] != '\t') && (i < (strlen(frase)) - 2) ){
                contagem = contagem;
            }
            else{
                contagem++;
            }
        }
    }

    return contagem;
}