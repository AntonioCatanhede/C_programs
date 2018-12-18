#include <stdio.h>
#include <time.h>
#include <math.h>
int main() {
    double x, f, y;
    printf("Digite o valor x: ");
    scanf("%lf", &x);
    printf("Digite o valor y: ");
    scanf("%lf", &y);
    if (x >= 0){
        y >= 0 ? (f = x + y) : (f = x + (y*y));
    }
    else{
        y >= 0 ? (f = pow(x, 2) + y) : (f = pow(x,2) + (y*y));
    }
    printf("f(x,y) = %.2lf \n", f);
    return 0;
}
  