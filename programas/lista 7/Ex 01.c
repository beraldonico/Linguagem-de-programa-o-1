#include <stdio.h>

int max(int num1, int num2);

int main(){
    int a, b;
    int num_max;

    printf("\n O programa retorna o valor de dois numeros\n");
    printf("Digite o numero 1: ");
    scanf("%i", &a);
    printf("Digite o numero 2: ");
    scanf("%i", &b);

    num_max = max(a,b);

    printf("\n\n O maior numero e %i", num_max);

    return 0;
}

int max(int num1, int num2){
    int result;

    if(num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}
