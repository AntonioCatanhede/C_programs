#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int troca_primo_por_zero(int *vetor, int size_vetor);

int checa_num_primo(int num, int divisor);

int main(int argc, char const *argv[])
{
    int size_vetor, *vetor, numero;
    srand(time(NULL));
    printf("Digite n: ");
    scanf("%d", &size_vetor);

    vetor =(int*)malloc(size_vetor*sizeof(int));

    for(int i = 0; i < size_vetor; i++) {
        vetor[i] = (rand() % 100) +1;
    }
    //impressao antes da troca
    for (int i=0; i<size_vetor; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    troca_primo_por_zero(vetor, size_vetor);

    //impressao depois da troca
    for (int i=0; i<size_vetor; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

//analisa recursivamente se os elementos do vetor sao primos e,
//em caso positivo, os troca por 0
int troca_primo_por_zero(int *vetor, int size_vetor){
    int check;

    if(size_vetor==0){
        return 0;
    }
    check = checa_num_primo(*vetor,*(vetor)-1);
    if (check == 1){
        *vetor = 0;
    }
    size_vetor =size_vetor-1;
    vetor = vetor + 1;

    troca_primo_por_zero(vetor, size_vetor);
    
}

// checa recursivamente se um numero eh primo
int checa_num_primo(int num, int divisor){
    if (num<=2){
        return (num == 2) ?  1 : 0;
    }
    if(divisor==1){
        return 1;
    }
    else{
        if(num%divisor==0){
            return 0;
        }
        else{
            checa_num_primo(num,divisor-1);
        }  
    }
}