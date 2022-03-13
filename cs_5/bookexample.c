#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Books{
    int book_id;
    char title[64];
    char author[64];
    char subject[128];
}typeBook;

int main(){
    typeBook book_i;
    strcpy(book_i.title, "C++ Programming");
    strcpy(book_i.author, "CGU123");
    strcpy(book_i.subject, "C++ Programming Tutorial");
    book_i.book_id = 1;

    printf("Book i title : %s\n", book_i.title);
    printf("Book i author : %s\n", book_i.author);
    printf("Book i subject : %s\n", book_i.subject);
    printf("Book i book_id : %d\n", book_i.book_id);
    return 0;
}