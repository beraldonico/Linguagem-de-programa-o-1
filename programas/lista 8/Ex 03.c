#include <stdio.h>
#include <string.h>

struct Books{
    int book_id;
    char title[50];
    char author[50];
};

void printBook( struct Books book, int n);

int main(){
    const int lib_size = 5;
    struct Books lib[lib_size];
    int i;

    for(i = 0; i < lib_size; i++){
        printf("\nEntrada de dados para o livro %i", i);

        lib[i].book_id = 100 + i;

        printf("\n Titulo: ");
        scanf("%s", lib[i].title);

        printf("\n Autor: ");
        scanf("%s", lib[i].author);
    }

    printf("\nConteudo do vetor lib: \n\n");

    for(i = 0; i < lib_size; i++){
        printBook(lib[i], i);
    }

    return 0;
}

void printBook(struct Books book, int n){
    printf("\n________Livro %i____________\n", n);
    printf("Codigo : %i \n", book.book_id);
    printf("Titulo : %s \n", book.title);
    printf("Autor : %s \n", book.author);
}
