#include <stdio.h>

void inputV(int v[], int vSize);


int main(){
    int i;
    const int aSize = 5;
    int a[aSize];

    const int bSize = 10;
    int b[bSize];

    inputV(a, aSize);
    printf("\n Vetor a: \n");
    for(i = 0; i < aSize; i++)
        printf("%i ", a[i]);

    inputV(b, bSize);
    printf("\n Vetor a: \n");
    for(i = 0; i < bSize; i++)
        printf("%i ", b[i]);



    return 0;
}

void inputV(int v[], int vSize){
    int i;

    for(i = 0; i < vSize; i++)
        v[i] = i;

    return;
}
