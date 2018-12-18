#include <stdio.h>
#include <stdlib.h>

double MaiorValor(double *v, int n);

int main(int argc, char const *argv[])
{
    int n;
        
    printf("Digite n: ");
    scanf("%d", &n);

    double maior, v[n];

    for (int i=0; i<n; i++){
        scanf("%lf", &v[i]);
    }

    maior = MaiorValor(v, n-1);

    printf("O maior valor eh: %.3lf\n",maior);

    return 0;
}

double MaiorValor(double *v, int n){

    double maior;

    if(n==0){
        maior = v[n];
    }
    else{
        maior = MaiorValor(v, n-1);
        if(maior < v[n]){
            maior = v[n];
        }
    }

    return maior;
}

//PQ MINHA VERSAO EH PIOR?
//SÓ FUNCIONA COM n = TAMANHO DE v -1.

// double MaiorValor(double *v, int n){

//     double maior;

//     if(n==0){

//         if(v[n]>v[n+1]){
//             maior = v[n];
//             return maior;
//         }
//         else{
//             maior = v[n+1];
//             return maior;
//         }
//     }
//     if(v[n] <= MaiorValor(v,n-1)){
//         maior = MaiorValor(v,n-1);
//     }
//     else{
//         maior = v[n];
//     } 
//     return maior;
// }



