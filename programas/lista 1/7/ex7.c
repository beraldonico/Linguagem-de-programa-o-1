#include<stdio.h>
int c;
float s;
float s_n;
float a;
int main(){
    printf("\n Salario atual: ");
    scanf("%f", &s);
    printf("\n Escolha o cargo do funcionario: \n" );
    printf("1 - Escrituario \n");
    printf("2 - Secretario \n");
    printf("3 - caixa \n");
    printf("4 - gerente \n");
    printf("5 - diretor \n\n");
    scanf("%i", &c);
    switch (c) {
        case 1:
            a = s * 0.5;
             s_n = s + a;
            printf ("\n Cargo: 1 - Escrituario \n");
            printf ("\n Valor de aunento: %.2f \n", a);
            printf ("\n Novo salario: %.2f \n", s_n );
            break;
        case 2:
            a = s * 0.35;
            s_n = s + a;
            printf ("\n Cargo: 2 - Secretario \n");
            printf ("\n Valor de aumento: %.2f \n", a);
            printf ("\n Novo salario: %.2f \n", s_n );
            break;
        case 3:
            a = s * 0.20;
            s_n = s + a;
            printf ("\n Cargo: 3 - caixa \n");
            printf ("\n Valor de aumento: %.2f \n", a);
            printf ("\n Novo salario: %.2f \n", s_n );
            break;
        case 4:
            a = s * 0.10;
            s_n = s + a;
            printf ("\n Cargo: 4 - gerente \n");
            printf ("\n Valor de aumento: %.2f \n", a);
            printf ("\n Novo salario: %.2f \n", s_n );
            break;
        case 5:
            printf("\n Cargo: 5 - diretor \n");
            printf("\n nao possue aumento de salario \n");
            break;
        default:
            printf(" \n Cedigo de cargo invalido! \n ");
            break;
    }
 return 0;
}
