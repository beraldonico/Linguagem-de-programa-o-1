#include <stdio.h>
#include <time.h>

int maiormenor(int v[], int vSize);
int sum(int v1[], int v1Size, int v2[], int v2Size);

int main(){
    int aSize = 10, bSize = 15, i;
    int a[aSize], b[bSize];
    int m1, m2, s;

    srand(time(NULL));
    for(i = 0; i < 10; i++){
        a[i] = 1 + rand() % 10;
    }

    for(i = 0; i < 15; i++){
        b[i] = 1 + rand() % 10;
    }

    for(i = 0; i < 10; i++){
        printf("%i || ", a[i]);
    }

    printf("\n");

    for(i = 0; i < 15; i++){
        printf("%i || ", b[i]);
    }

    m1 = maiormenor(a, aSize);
    m2 = maiormenor(b, bSize);
    s = sum(a, aSize, b, bSize);

    printf("A soma do maior e menor numero e a e b, respectivamente sao:\n%i e %i\n A soma dos valores de a e b e %i", m1, m2, s);

    return 0;
}

int maiormenor(int v[], int vSize){
    int maior = v[0], menor = v[0], i;

    for(i = 1; i < vSize; i++){
        if(menor > v[i])
            menor = v[i];
    }

    for(i = 1; i < vSize; i++){
        if(maior < v[i])
            maior = v[i];
    }

    return maior + menor;
}

int sum(int v1[], int v1Size, int v2[], int v2Size){
    int s = 0, i;

    for(i = 0; i < v1Size; i++){
        s += v1[i];
    }

    for(i = 0; i < v2Size; i++){
        s += v2[i];
    }

    return s;
}
