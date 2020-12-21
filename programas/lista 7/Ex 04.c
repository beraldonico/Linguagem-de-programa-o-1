#include <stdio.h>

int main(){
    int i = 17;
    char c = 'c'; //ascii value is 99
    int sum_i;
    float sum_f;

    sum_i = i + c;
    sum_f = i + c;

    printf("Soma (int) = %d \nSoma (float) = %f", sum_i, sum_f);

    return 0;
}
