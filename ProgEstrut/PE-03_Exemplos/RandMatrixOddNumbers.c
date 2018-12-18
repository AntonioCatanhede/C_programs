#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "../common/pe_utility.h"
#include <string.h>

// void CreateRandomOddNumbersMatrix(int *PointMatrix);

int main(){

    // int dimA, dimB;
    // int *x = &dimA, *y = &dimB;
    // scanf("%d", x);
    // scanf("%d", y);
    // int Matrix[dimA][dimB];
    // int *PointMatrix;
    // PointMatrix = &Matrix;

    // CreateRandomOddNumbersMatrix(PointMatrix);
    char vogais[] = {'A', 'E', 'I', 'O', 'U'};
    int sz = sizeof(vogais) / sizeof(char);
    char vogais_inv[sz];
    int i = 0;
    while(i < sz) {
        vogais_inv[i] = vogais[sz - i - 1];
        i++;
    }

    char nome[100];
    fgets(nome, 100, stdin);
    printf("O nome digitado foi %s (%lu caracteres)\n", nome, strlen(nome));
   
    char string1[]= "12345678";
    int tamanhoStrg1 = sizeof(string1)/sizeof(char);

    printf("O tamanho da string1, enquanto um arrary de char é: %d \n",tamanhoStrg1);
    printf("O tamanho da string1, enquanto uma string é: %ld \n",strlen(string1));
    char string2[] = {'0','0','0','0', '0','0','0','0', '0','0'};
    int tamanhoStrg2 = sizeof(string2)/sizeof(char);

    printf("O tamanho da string2 é: %d \n",tamanhoStrg2);

    memcpy(string2, string1, tamanhoStrg2-1);
    printf("\n%s \n",string1);
    string2[tamanhoStrg2-1]='\0';

    pe_print_chrvector(string2, tamanhoStrg2);

    // const char src[50] = "http://paulojoia.orgfree.com";
    // char dest[50];
    // strcpy("Site Topster!",dest);
    // pe_print_chrvector(vogais, sz);
    // pe_print_chrvector(vogais_inv, sz);
    char str1[] = "Geeks sao tops";   
    char str2[] = "Quiz";   
    printf("O tamanho de str1 era: %ld \n", (sizeof(str1)/sizeof(char)));
    
    puts("str1 before memcpy "); 
    puts(str1); 
    
    /* Copies contents of str2 to sr1 */
    memcpy (str1, str2, strlen(str2)); 
    printf("O tamanho de str1 agora é: %ld \n", (sizeof(str1)/sizeof(char)));
    
    puts("\nstr1 after memcpy "); 
    puts(str1); 



    return 0;
}

// void CreateRandomOddNumbersMatrix(int *PointMatrix){
//     int i = sizeof(*PointMatrix)/sizeof(int); //numero colunas
//     int j = 8;


// }
