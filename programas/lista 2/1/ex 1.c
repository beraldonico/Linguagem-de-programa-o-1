#include<stdio.h>
float n1, n2, n3, soma=0;
int main()
{
    printf("soma de numeros negativos\n");
    printf("escreva tres nuneros reais:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    if(n1<0)
        soma = n1 + soma;
    if(n2<0)
        soma = n2 + soma;
    if(n3<0)
        soma = n3 + soma;
    printf("a soma dos numeros negativos eh %1.f",soma);
    return 0;
}
