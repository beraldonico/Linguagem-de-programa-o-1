#include <stdio.h>
#include <time.h>

int menor(int v[], int vSize);
int sum(int v[], int vSize);
float media(int v[], int vSize);

int main(){
    int aSize = 10, bSize = 15, i;
    int a[aSize], b[bSize];
    int m, s;
    float md;

    srand(time(NULL));
    for(i = 0; i < 10; i++){
        a[i] = 1 + rand() % 30;
    }

    for(i = 0; i < 15; i++){
        b[i] = 1 + rand() % 30;
    }

    for(i = 0; i < 10; i++){
        printf("%i || ", a[i]);
    }

    printf("\n");

    for(i = 0; i < 15; i++){
        printf("%i || ", b[i]);
    }

    m = menor(a, aSize);
    s = sum(a, aSize);
    md = media(a, aSize);

    printf("O menor numero e a e %i, a soma de seus numeros e %i e sua media e %.2f", m, s, md);

    m = menor(b, bSize);
    s = sum(b, bSize);
    md = media(b, bSize);

    printf("\nO menor numero e b e %i, a soma de seus numeros e %i e sua media e %.2f", m, s, md);

    return 0;
}

int menor(int v[], int vSize){
    int m = v[0], i;

    for(i = 1; i < vSize; i++){
        if(m > v[i])
            m = v[i];
    }

    return m;
}

int sum(int v[], int vSize){
    int s = 0, i;

    for(i = 0; i < vSize; i++){
        s += v[i];
    }

    return s;
}

float media(int v[], int vSize){
    float m;
    int s;

    s = sum(v, vSize);
    m = (float) s/vSize;

    return m;
}
