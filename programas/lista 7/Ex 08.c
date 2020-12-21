#include <stdio.h>

int a = 20;
int sum(int a, int b);

int main(){
    int a = 10, b = 5, c = 0;

    printf("\n Valor de a em main() = %d\n\n", a);
    c = sum(a,b);
    printf("Valor de c = a + b em main() = %d\n\n", c);

    return 0;
}

int sum(int a, int b){
    printf("Funcao sum\n");
    printf("Valor de a em sum() = %d\n\n", a);
    printf("Valor de b em sum() = %d\n\n", b);
    printf("Fim da funcao");

    return a + b;
}
