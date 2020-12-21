#include<stdio.h>

int main(){
    int n;
    printf("digite um numero para saber se eh positivo: ");
    scanf("%i",&n);
    if(n >= 0){
        printf("esse numero eh positivo\n");
    }
    if(n < 0){
            printf("esse numero eh negativo\n");
        }
    return 0;
}
