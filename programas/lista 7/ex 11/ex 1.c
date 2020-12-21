#include<stdio.h>
int x, y, z;
int main(){
    printf("digite tres variaveis: ");
    scanf("%i",&x);
    scanf("%i",&y);
    scanf("%i",&z);
    printf("valor maximo eh: %i \n", maximo(x,y,z));
    printf("valor minimo eh: %i \n", minimo(x,y,z));
}
int maximo(int x,int y,int z){
    if(x>y && x>z)
        return x;
    if(y>x && y>z)
        return y;
    if(z>x && z>y)
        return z;
}
int minimo(int x,int y,int z){
    if(x<y && x<z)
        return x;
    if(y<x && y<z)
        return y;
    if(z<x && z<y)
        return z;
}
