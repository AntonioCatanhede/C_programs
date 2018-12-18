#include<stdio.h>

void incrementa (int*x)
{
    (*x)++;
}

int main(void)
{
    int count = 100;
    int *p;

    p	= &count;

    printf("O endereço apontado por p é %p\n", p);
    printf("o conteúdo apontado por p é %d\n",*p);

    *p = 200;
    printf("O conteúdo apontado por p é %d\n",*p);
    printf("O conteúdo de n é %d\n", count);

    printf("O endereço de p é %p\n", &p);

    int q = *p;
    printf("%d\n",q);


    //Exemplo 2
    int num = 800;
    printf("Endereço de num = %d é %p\n", num, &num);
    
    int n = 507;
    int *ptr = &n;
    *ptr = 25;
    *ptr *= 25;

    printf("%d\n", n);

    return 0;
    

}