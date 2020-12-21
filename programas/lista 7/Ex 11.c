#include <stdio.h>

int maximo(int a, int b, int c);
int minimo(int a, int b, int c);

int main(){
    int a, b, c, maior, menor;

    printf("Digite o valor de a: \n");
    scanf("%i", &a);
    printf("Digite o valor de b: \n");
    scanf("%i", &b);
    printf("Digite o valor de c: \n");
    scanf("%i", &c);

    maior = maximo(a, b, c);
    menor = minimo(a, b, c);

    printf("O valor maximo e %i e o minimo e %i", maior, menor);

    return 0;
}

int maximo(int a, int b, int c){
    int maior;

    if((a >= b) && (a >= c))
        maior = a;
    else if((b >= a) && (b >= c))
        maior = b;
    else if((c >= a) && (c >= b))
        maior = c;

    return maior;
}

int minimo(int a, int b, int c){
    int menor;

    if((a <= b) && (a <= c))
        menor = a;
    else if((b <= a) && (b <= c))
        menor = b;
    else if((c <= a) && (c <= b))
        menor = c;

    return menor;
}

