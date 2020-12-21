#include <stdio.h>
#include <string.h>

struct Books{
    int book_id;
    char title[50];
    char author[50];
};

int main(){
    struct Books Book1;
    struct Books Book2;

    strcpy(Book1.title, "Logica de Programacao");
    strcpy(Book1.author, "FORBELLONE");
    Book1.book_id = 101;

    strcpy(Book2.title, "Treinamento Linguagem C");
    strcpy(Book2.author, "MIZRAHI");
    Book2.book_id = 102;

    printf("___________Livro 1______________\n");
    printf("Codigo : %d\n", Book1.book_id);
    printf("Titulo : %s\n", Book1.title);
    printf("Autor : %s\n", Book1.author);

    printf("\n___________Livro 2______________\n");
    printf("Codigo : %d \n", Book2.book_id);
    printf("Titulo : %s \n", Book2.title);
    printf("Autor : %s \n", Book2.author);

    return 0;
}
