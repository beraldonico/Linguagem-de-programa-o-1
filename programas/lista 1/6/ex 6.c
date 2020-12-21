#include<stdio.h>
int mes;
int main()
{
    printf("digite um numero de 1 a 5\n");
    scanf("%i",&mes);
    switch(mes){
        case 1:
            printf("um");
            break;
        case 2:
            printf("dois");
            break;
        case 3:
            printf("tres");
            break;
        case 4:
            printf("quatro");
            break;
        case 5:
            printf("cinco");
            break;
        default:
            printf("numero invalido");
    }
}
