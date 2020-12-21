#include<stdio.h>

int main(){
    int tra, ava, exa, media;
    printf("nota do aluno\n");
    printf("\n digite a nota do trabalho: ");
    scanf("%i",&tra);
    printf("\n digite a nota da avaliacao: ");
    scanf("%i", &ava);
    printf("\n digite a nota o exame: ");
    scanf("%i", &exa);
    media = tra * 0.2 + exa * 0.3 + exa * 0.5;
    printf("\n a media final eh %i \n", media);
    return 0;
}
