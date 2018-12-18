#include <stdio.h>
#include <stdlib.h>



// int main() {
// 	int vetor[5];
//     int i, u=0;
//     char p ='c';

//     for(i=0; i<5; i++){
//         ++u;
//         vetor[i]= (i+1)*(i+1);
//         printf("vetor[%d] = %d \n", i, vetor[i]);
//         printf("u = %d \n", u);
     
//     }
//     printf("tamanho = %c \n", p);
     
// 	return 0;
// }

// void muda_valor(int parametro) {
//     parametro = 507;
//     printf("%d\n", parametro);
// }

// int main() {
//     int n = 1000;
//     muda_valor(n);
//     printf("%d\n", n);
//     return 0;
// }
int main() {
    int num;
    int *pt1 = &num;
    char *p;
    fgets(p, 100, stdin);
    puts(p);
    scanf("%d", pt1);
    printf("%d\n", num);
    printf("%p\n", pt1);
    printf("%p\n", &num);

    return 0;
}