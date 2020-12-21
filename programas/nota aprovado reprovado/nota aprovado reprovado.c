#include <stdio.h>
int main()
{
    float nota=0;
    int cont=0;
    while(cont == 0){

        printf("escreva a nota do aluno:\n");
        scanf("%f",&nota);

        if(nota>=60)
            printf("aprovado\n");
        else
            printf("reprovado\n");
        printf("quer digitar outra nota?(s= 1/ n=0)\n");
        scanf("%i",&cont);
    }
    return 0;
}
