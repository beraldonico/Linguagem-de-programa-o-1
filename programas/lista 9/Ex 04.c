#include <stdio.h>

int main(){
    int v[10] = {10, 100, 200, -3, 1, 0, 45, 67, 8, 23};
    int i, *ptr;

    ptr = v;
    for(i = 0; i < 10; i++){
        printf("Endereco de v[%i] = %x \n", i, ptr);
        printf("Valor de v[%i] = %i \n", i, *ptr);
        ptr++;
    }


    return 0;
}
