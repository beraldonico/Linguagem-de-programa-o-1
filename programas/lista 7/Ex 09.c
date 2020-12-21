#include <stdio.h>

int a;
void f(int b);

int main(){
    int b;

    printf("\n Valor de a em main() = %d\n\n", a);
    printf("\n Valor de b em main() = %d\n\n", b);

    f(b);

    return 0;
}

void f(int b){
    int c;

    printf("Funcao f (inicio)");
    printf("\n Valor de a em f() = %d\n\n", a);
    printf("\n Valor de b em f() = %d\n\n", b);
    printf("\n Valor de c em f() = %d\n\n", c);
}
