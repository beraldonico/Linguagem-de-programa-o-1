#include <stdio.h>

int byValue(int a);
void byPtr(int *ptr);

int main(){
    int num;
    int x = -5, y = -5;

    printf("Passagem de argumento ByValue:\n");
    printf("x = %i\n", x);
    printf("Chamada de funcao num = byValue(x)\n");
    num = byValue(x);
    printf("num = %i \n", num);
    printf("x = %i\n\n", x);

    printf("Passagem de argumento por ByPtr:\n");
    printf("y = %i\n", y);
    printf("Chamada de funcao byPtr(&y)\n");
    byPtr(&y);
    printf("y = %i\n\n", y);

    return 0;
}
int byValue(int a){
    if(a < 0)
        return a * -1;
    else
        return a;
}
void byPtr(int *ptr){
    if( *ptr < 0)
        *ptr = *ptr * -1;
    return;
}
