#include<stdio.h>
float a, b, c, co=0, deltas;
float main(){
    pritnf("supondo uma equacao do segundo grau como ax^2+bx+c, digite a, b, c para descobrir x:");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    pritnf("a equacao eh: ",a,"x^2+",b,"x+",c,"\n");
    deltas = delta(a,b,c);
    if (deltas<0)
        printf("essa equacao nao possui solucao !\n");
        else
            baskara(deltas);
return 0;
}
float delta(float a,float b,float c){
    float x,n=0,i=1;
    x= b*b-4*a*c;
    while(x >=i){
        x=x-i;
        i=i+2;
        n=n+1;
    }
    return n;
}
float baskara(float deltas, float a, float b, float c){
    float x;
    while(co <=2){
    if(co==1)
        x=(-b*deltas)/4*a
    else
        x=(-b*-deltas)/4*a
    co=co+1
    printf("x1=%.2f",x);
    }

}
