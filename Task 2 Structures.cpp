#include <stdio.h>

struct Product {
    char name[50];
    float price;
    int quantity;
};

int main() {
    struct Product p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter price: ");
    scanf("%f", &p.price);

    printf("Enter quantity: ");
    scanf("%d", &p.quantity);

    printf("Total: %.2f UAH", p.price * p.quantity);

    return 0;
}