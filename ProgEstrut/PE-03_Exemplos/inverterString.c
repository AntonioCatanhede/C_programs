#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "/home/antonio/Dropbox/UFABC/UFABC_2018_3/ProgEstrut/common/pe_utility.h"


void strflip(char *dest, const char *src);

int main(int argc, char const *argv[])
{
    const char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char s2[50];

    int s1_len_as_vector, s1_len_as_string;

    s1_len_as_vector = (int)(sizeof(s1)/sizeof(char));
    s1_len_as_string = strlen(s1);

    pe_print_chrvector((char*)s1, s1_len_as_string);
    pe_print_chrvector((char*)s1, s1_len_as_vector);
    printf("%s\n",s1);

    printf("length as vector = %d; length as string = %d\n\n", s1_len_as_vector, s1_len_as_string);

    strflip(s2, s1);

    pe_print_chrvector(s2, s1_len_as_string);

    pe_print_chrvector(s2, s1_len_as_vector);
    printf("%s\n",s2);

    return 0;
}

void strflip(char *dest, const char *src){
    int len_string = strlen(src);

    for (int i=0; i < len_string; i++){
        *(dest + i) = *(src + (len_string -1)-i);

    }

}