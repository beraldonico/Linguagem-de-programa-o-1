#include<stdio.h>
int main()
{
    float cont=0, numero;
    while(cont == 0){
        printf("escreva um numero:\n");
        scanf("%f",&numero);
        if(numero>0)
            printf("nuero positivo\n");
            else
                printf("numero negaivo\n");
        printf("deseja escrever outro numero?\n");
        scanf("%f",&cont);
    }
    return 0;
}
