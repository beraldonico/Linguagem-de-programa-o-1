#include<stdio.h>
int main(){
    int media=0, numero, cont=0, end=0;
    printf("media de numero negativos\n");
    printf("escreva os numeros negativos que deseja fazer a media:\n");
    do{
        scanf("%i",&numero);
        media = media + numero;
        cont=cont + 1;
        printf("deseja obter a media dos numeros digitados?(1-sim/2-nao) \n");
        scanf("%i",&end);
    }while(end == 1);
    media=media/cont;
    printf("media dos numeros negativos eh :%i",media);
    return 0 ;
}
