#include<stdio.h>
int n1, n2, n3, n4, somap=0, somai=0;
int main()
{
    printf("quantidade de numeros pares e impares\n");
    printf("escreva quatro nuneros:\n");
    scanf("%i",&n1);
    scanf("%i",&n2);
    scanf("%i",&n3);
    scanf("%i",&n4);
    if(n1%2 != 0)
        somai = somai + 1;
        else
            somap = somap + 1;
    if(n2%2 != 0)
        somai = somai + 1;
        else
            somap = somap + 1;
    if(n3%2 != 0)
        somai = somai + 1;
        else
            somap = somap + 1;
    if(n4%2 != 0)
        somai = somai + 1;
        else
            somap = somap + 1;
    printf("existem %i ",somap);
    printf("numeros pares\n");
    printf("existem %i ",somai);
    printf("numeros impares");
    return 0;
}
