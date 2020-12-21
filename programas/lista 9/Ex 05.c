#include <stdio.h>

const int arraySize = 10;

int main(){
    int v[] = {10, 200, 300, -3, 1, 0, 45, 67, 8, 23};
    int i, *ptr;

    i = 0;
    ptr = v;

    while(ptr <= &v[arraySize - 1]){
        printf("Endereco de v[%i] = %x \n", i, ptr);
        printf("Valor de v[%i] = %i \n", i, *ptr);

        ptr++;
        i++;
    }

    return 0;
}
