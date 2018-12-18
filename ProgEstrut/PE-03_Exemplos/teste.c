#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[]){

    int **vetor, k = 0, **Pvetor;

    vetor = (int**)malloc(5*sizeof(int*));

    for(int i=0; i<5; i++){
        vetor[i] = (int*)malloc(3*sizeof(int));

        for(int j=0; j<3; j++){
            k++;
            // vetor[i][j] = k;
            (*(vetor +i))[j] = k;
            // *(*(vetor +i)+j) = k;
            printf("%d\n", (*(vetor + i))[j] );
        }
    }

    k=0;
    Pvetor = vetor;

    printf("vetor eh: %d\n", vetor[1][0]);
    printf("Pvetor eh: %d\n", Pvetor[1][0]);

    printf("vetor eh: %d\n", *(Pvetor + 1)[0] );
    printf("Pvetor eh: %d\n", *(Pvetor + 1)[0] );

    printf("vetor eh: %d\n", *(*(vetor +1)) );
    printf("Pvetor eh: %d\n", *(*(vetor +1)) );

    for (int i=0; i<5; i++)
        free(vetor[i]);
    free(vetor);

    char **vetor1, letra= 'C';

    vetor1 = (char**)malloc(5*sizeof(char*));

    for(int i=0; i<5; i++){
        vetor1[i] = (char*)malloc(3*sizeof(char));

        for(int j=0; j<3; j++){
            // vetor[i][j] = k;
            (*(vetor1 +i))[j] = letra;
            // *(*(vetor +i)+j) = k;

             printf("%c ", (*(vetor1 + i))[j] );
        }
        printf("\n");

    }

    for (int i=0; i<5; i++)
        free(vetor1[i]);
    free(vetor1);


    char **vetor2, palavra[] = "Eu sou foda", foda[] = " para caralho!";
    int size_foda = (int)(sizeof(foda)/sizeof(char));

    vetor2 = (char**)malloc(5*sizeof(char*));

    for(int i=0; i<5; i++){
        vetor2[i] = (char*)malloc(2*size_foda*sizeof(char*));


        strcpy(vetor2[i], palavra);
        strcat(vetor2[i], foda);

        printf("%s ", vetor2[i]);

        printf("\n");

        char *s2 = s;
        int l = strlen(s2);

        while(isspace(s2[l-1]))
            s2[--l] = 0;

        while(*s2 && isspace(*s2))
            ++s2, --l;

        memmove(s, s2, l+1);
        return s;

    }
    s

    for (int i=0; i<5; i++)
        free(vetor2[i]);
    free(vetor2);

    return 0;
}
