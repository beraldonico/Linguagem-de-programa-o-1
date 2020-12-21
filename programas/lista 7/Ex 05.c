#include <stdio.h>
#include <math.h>

int main(){
    int i = 17;

    printf("O programa retorna n * n * n. [0...10]\n\n");

    for(i = 0; i <= 10;  i++){
        printf("\n %i elevado ao cubo = %.0f", i, pow(i, 3));
    }

    return 0;
}
