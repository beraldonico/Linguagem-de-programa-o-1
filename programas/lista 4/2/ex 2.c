#include<stdio.h>
int main(){
    int n,f=1;
    printf("fatorial do numero\n");
    printf("deseja saber o fatorial de qual numero: ");
    scanf("%i",&n);
    if(n>0){
        for(n;n>0;n--){
            f=n*f;
        }
    }
    printf("\nfatorial de %i eh %i\n",n,f);
    return 0;
}
