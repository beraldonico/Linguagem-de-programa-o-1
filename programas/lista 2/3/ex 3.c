#include<stdio.h>
int n1, n2, n3, n4, soma=0;
int main()
{
    printf("soma de numeros impares ou positivos\n");
    printf("escreva quatro nuneros:\n");
    scanf("%i",&n1);
    scanf("%i",&n2);
    scanf("%i",&n3);
    scanf("%i",&n4);
    if(n1>0 || n1%2 != 0)
        soma = n1 + soma;
    if(n2>0 || n2%2 != 0)
        soma = n2 + soma;
    if(n3>0 || n3%2 != 0)
        soma = n3 + soma;
    if(n4>0 || n4%2 != 0)
        soma = n3 + soma;
    printf("a soma dos numeros impares ou positivos eh %i",soma);
    return 0;
}
