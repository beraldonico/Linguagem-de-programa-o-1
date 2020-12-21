#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main(){
    int opc;
    float a, b, result;

    printf("Digite a operacao desejada:\n(1 - SOMA; 2 - SUBTRACAO; 3 - MULTIPLICACAO; 4 - DIVISAO)\n\n");
    scanf("%i", &opc);

    switch(opc){
    case 1:
        printf("Digite o valor de a: \n");
        scanf("%f", &a);
        printf("Digite o valor de b: \n");
        scanf("%f", &b);

        result = add(a, b);
        printf("Resultado e %.2f \n", result);
        break;
    case 2:
        printf("Digite o valor de a: \n");
        scanf("%f", &a);
        printf("Digite o valor de b: \n");
        scanf("%f", &b);

        result = sub(a, b);
        printf("Resultado e %.2f \n", result);
        break;
    case 3:
        printf("Digite o valor de a: \n");
        scanf("%f", &a);
        printf("Digite o valor de b: \n");
        scanf("%f", &b);

        result = mul(a, b);
        printf("Resultado e %.2f \n", result);
        break;
    case 4:
        printf("Digite o divisor: \n");
        scanf("%f", &a);
        do{
        printf("Digite o dividendo: \n");
        scanf("%f", &b);

        if(b == 0.0)
            printf("Dividendo nao pode ser zero!!\n\n");
        }while(b == 0.0);

        result = div(a, b);
        printf("Resultado e %.2f \n", result);
        break;
    }

    return 0;
}

float add(float a, float b){
    return a + b;
}

float sub(float a, float b){
    return a - b;
}

float mul(float a, float b){
    return a * b;
}

float div(float a, float b){
    return a / b;
}
