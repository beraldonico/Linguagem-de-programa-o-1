#include<stdio.h>
int n1, n2, n3, soma=0;
int main()
{
    printf("soma de numeros pares\n");
    printf("escreva tres nuneros inteiros:\n");
    scanf("%i",&n1);
    scanf("%i",&n2);
    scanf("%i",&n3);
    if(n1%2 == 0)
        soma = n1 + soma;
    if(n2%2 == 0)
        soma = n2 + soma;
    if(n3%2 == 0)
        soma = n3 + soma;
    printf("a soma dos numeros pares eh %i",soma);
    return 0;
}
