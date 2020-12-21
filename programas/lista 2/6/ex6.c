#include<stdio.h>
int mes;
int main()
{
    printf("calendario 2015\n");
    printf("deseja saber quantos dias qual mes tem");
    scanf("%i",&mes);
    switch(mes){
        case 1:
            printf("janeiro tem 31 dias");
            break;
        case 2:
            printf("fevereiro tem 28 dias");
            break;
        case 3:
            printf("marco tem 31 dias");
            break;
        case 4:
            printf("abril tem 30 dias");
            break;
        case 5:
            printf("maio tem 31 dias");
            break;
        case 6:
            printf("junho tem 30 dias");
            break;
        case 7:
            printf("julho tem 31 dias");
            break;
        case 8:
            printf("agosto tem 31 dias");
            break;
        case 9:
            printf("setembro tem 30 dias");
            break;
        case 10:
            printf("outubro tem 31 dias");
            break;
        case 11:
            printf("novembro tem 30 dias");
            break;
        case 12:
            printf("dezembro tem 31 dias");
            break;
        default:
            printf("mes invalido");
    }
}
