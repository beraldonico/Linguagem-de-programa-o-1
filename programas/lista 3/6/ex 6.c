#include<stdio.h>
int main(){
    int n, i=0, soma=0;
    printf("numeros pares e multiplos de 3\n");
    printf("escreva ate onde deseja daber os multiplos pares de 3: ");
    scanf("%i",&n);
    for(i=0;i<=n; i++){
        if (i%3==0 && i%2==0){
            printf("%i\n",i);
            soma = soma +i;
        }
    }
    printf("a soma desses numeros eh %i",soma);
    return 0;
}
