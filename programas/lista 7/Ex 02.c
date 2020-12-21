#include <stdio.h>

int square(int num);
void printl();

int main(){
    int i;

    printf("\n O programa retorna n * n [0...10] \n");

    for(i = 0; i < 10; i++){
        printf("%i elevado ao quadrado = %i", i, square(i));
        printl();
    }

    return 0;
}

int square(int num){
    return num * num;
}

void printl(){
    printf("\n\n----------------------------------------------------------\n\n");
    return;
}
