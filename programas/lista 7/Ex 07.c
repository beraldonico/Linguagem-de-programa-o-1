#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    printf("Localização do programa: impressão de caracteres e acetuação");

    return 0;
}
