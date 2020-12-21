#include<stdio.h>
int main(){
    int n=-10 ;
    printf(" múltiplos de 5 no intervalo de -10 a 20\n");
    do{
        if(n%5== 0)
        printf("%i\n",n);
        n=n+1;
    }while(n<=20);
    return 0;
}
