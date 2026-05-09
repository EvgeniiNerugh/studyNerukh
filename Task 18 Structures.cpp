#include <stdio.h>

struct Product {
    char name[50];
    float price;
};

struct Order {
    struct Product product;
    int quantity;
};

int main() {
    struct Order o;
    float total;

    printf("Product name: ");
    scanf("%s", o.product.name);

    printf("Product price: ");
    scanf("%f", &o.product.price);

    printf("Order quantity: ");
    scanf("%d", &o.quantity);

    total = o.product.price * o.quantity;

    printf("Order total: %.2f UAH", total);

    return 0;
}