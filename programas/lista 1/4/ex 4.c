#include<stdio.h>

int main(){
    int n;
    printf("digite um numero para saber se eh positivo: ");
    scanf("%i",&n);
    printf(n>=0 ? "positivo\n" : "negativo\n");
    return 0;
}
