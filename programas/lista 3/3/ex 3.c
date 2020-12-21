#include<stdio.h>
int main(){
    int n=0 ;
    printf("multiplos de 3 entre 0 e 30\n");
    do{
        if(n%3== 0)
        printf("%i\n",n);
        n=n+1;
    }while(n<=30);
    return 0;
}
