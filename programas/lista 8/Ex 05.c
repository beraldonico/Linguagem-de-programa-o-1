#include <stdio.h>
#include <time.h>

int qtimp(int v[], int vSize);
int sum(int v[], int vSize);

int main(){
    int aSize = 10;
    int a[aSize], i, imp, s;

    srand(time(NULL));
    for(i = 0; i < 10; i++){
        a[i] = -10 + rand() % 20;
    }

    for(i = 0; i < 10; i++){
        printf("%i || ", a[i]);
    }

    imp = qtimp(a, aSize);
    s = sum(a, aSize);

    printf("\n\nA quantidade de impares de a e %i e a soma dos positivos e %i", imp, s);

    return 0;
}

int qtimp(int v[], int vSize){
    int imp = 0, i;

    for(i = 0; i < vSize; i++){
        if(v[i] % 2 != 0){
            imp++;
        }
    }

    return imp;
}

int sum(int v[], int vSize){
    int s = 0, i;

    for(i = 0; i < vSize; i++){
        if(v[i] >= 0)
            s += v[i];
    }

    return s;
}
