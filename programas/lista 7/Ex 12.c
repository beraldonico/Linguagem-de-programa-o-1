#include <stdio.h>

int area(int lado);
int perim(int lado);

int main(){
    int l, a, p;

    printf("DIGITE O LADO DO SEU QUADRADAO BOLADO!!!!!!!!!111!!11!\n");
    scanf("%i", &l);

    a = area(l);
    p = perim(l);

    printf("A area dele e %i u.c. e o perimetro e %i u.c.", a, p);

    return 0;
}

int area(int l){
    int area = l*l;
    return area;
}

int perim(int l){
    int perim = l * 4;
    return perim;
}
