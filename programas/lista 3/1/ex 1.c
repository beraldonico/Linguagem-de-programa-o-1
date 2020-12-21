#include<stdio.h>
int main(){
    int soma=0, n=1;
    printf("soma de numero impares de 0 ate 100\n");
    do{
        soma= soma + n;
        n=n+2;
        printf("\n%i\n",soma);
    }while(n<100);
    printf("\na soma eh %i\n", soma);
    return 0;
}
