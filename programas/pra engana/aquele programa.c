#include<stdio.h>

int main()
{   float total, grade, media;
    int gradecont;
        printf("\ndigite a nota ou -1 para finalizar:");
        scanf("%f", &grade);

    while(grade != -1)
    {
        total = total +grade;
        gradecont = gradecont + 1
        printf("\n digite a nota ou -1 para finalzar:");
        scanf("%f",&grade);
    }
    if(gradecont!=0)
    {
        media = total / gradecont;
        printf("\n a media da turma = ")
    }
}
