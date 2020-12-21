#include <stdio.h>

int main(){
    int y = 5;
    int *yPtr;

    yPtr = &y;

    printf("Endereco da variavel y: %x \n", &y);

    printf("Endereco salvo na variavel yPtr: %x \n", yPtr);

    printf("Valor de y: %i \n", y);

    printf("Valor da variavel *yPtr: %i \n", *yPtr);

    printf("Valor de *&yPtr: %x \n", *&yPtr);
    printf("Valor de &*yPtr: %x \n", &*yPtr);

    return 0;
}
