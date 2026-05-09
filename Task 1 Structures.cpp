#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int year;
};

int main() {
    struct Book b;

    printf("Enter title: ");
    scanf("%s", b.title);

    printf("Enter author: ");
    scanf("%s", b.author);

    printf("Enter year: ");
    scanf("%d", &b.year);

    printf("\"%s\" by %s (%d)", b.title, b.author, b.year);

    return 0;
}