#include<stdio.h>
int main(){
    int n, c=0, soma=0;
    printf("media de 5 numeros\n");
    while(c<5){
        printf("escreva um numero: ");
        scanf("%i",&n);
        soma = soma + n;
        c=c+1;
    }
    soma = soma /5;
    printf("%i",soma);
    return 0;
}
