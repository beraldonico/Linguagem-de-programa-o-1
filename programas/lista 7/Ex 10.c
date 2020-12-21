#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    unsigned int seed;
    int i, j, n, r;

    printf("Geracao de numeros aleatorios de 1 ate 6:\n");
    printf(" Funcao RAN (Numeros Pseudo Aleatorios)\n");
    for(i = 1; i <= 10; i++){
        n = 1 + rand() % 6;
    }

    printf("Funcao SRAND (numeros aleatorios)\n");
    seed = 1;
    while(seed != 0){
        printf("Digite numero inteiro ou 0 para sair: \n");
        scanf("%u", &seed);

        if(seed != 0){
            srand(seed);

            for(i = 1; i <= 10; i++){
                n = 1 + rand() % 6;
                printf("%i", n);
            }
        }
    }

    printf("Funcao SRAND + TIME (numeros aleatorios) \n");
    printf("Digite quantas sequencias de numeros aleatorios devem ser geradas \n");
    scanf("%d", &r);

    for(j = 1; j <= r; j++){
        printf("Sequencia %i \n", j);
        srand(time(NULL));

        for(i = 1; i <= 10; i++){
            n = 1 + rand() % 6;
            printf("%i  ", n);
        }
    }

    return 0;
}
