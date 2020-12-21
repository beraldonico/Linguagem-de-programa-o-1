#include <stdio.h>

int main(){
    int var, *ptr, **pptr;

    var = 5;

    ptr = &var;

    pptr = &ptr;

    printf("Valor de var = %i \n", var);
    printf("Endereco de var = %x \n", &var);
    printf("--------------------------------------\n");

    printf("Valor disponivel em *ptr = %i \n", *ptr);
    printf("Endereco de ptr = %x \n", &ptr);
    printf("Endereco armazenado em ptr = %x \n", ptr);
    printf("--------------------------------------\n");

    printf("Valor disponivel em *pptr = %i \n", *pptr);
    printf("Endereco de pptr = %x \n", &pptr);
    printf("Endereco armazenado em pptr = %x \n", pptr);

    return 0;
}
