#include<stdio.h>
float n1, n2, n3, n4, soma=0, cont =0, m=0;
int main()
{
    printf("valor medio dos numeros positvos\n");
    printf("escreva quatro nuneros:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&n4);
    if(n1>0){
        soma = n1 + soma;
        cont= cont +1;
    }
    if(n2>0){
        soma = n2 + soma;
        cont= cont +1;
    }
    if(n3>0){
        soma = n3 + soma;
        cont= cont +1;
    }
    if(n4>0){
        soma = n3 + soma;
        cont= cont +1;
    }
    m = soma / cont;
    printf("a media eh %.1f",m);
    return 0;
}
