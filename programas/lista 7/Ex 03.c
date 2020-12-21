#include <stdio.h>

int main(){
    int a, b;
    double c, d;

    a = 7;
    b = 2;

    c = a/b;
    printf("Divisao inteira %i / %i = %lf", a, b, c);

    d = (double) a / b;
    printf("\nDivisao com conversao de tipo %i / %i = %lf \n\n", a, b, d);

    return 0;
}
