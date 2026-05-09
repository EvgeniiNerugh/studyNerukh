#include <stdio.h>

struct Product {
    char name[50];
    float price;
};

int main() {
    struct Product p1, p2;

    printf("Product 1 - name: ");
    scanf("%s", p1.name);

    printf("Product 1 - price: ");
    scanf("%f", &p1.price);

    printf("Product 2 - name: ");
    scanf("%s", p2.name);

    printf("Product 2 - price: ");
    scanf("%f", &p2.price);

    if (p1.price > p2.price) {
        printf("%s is more expensive", p1.name);
    } else if (p2.price > p1.price) {
        printf("%s is more expensive", p2.name);
    } else {
        printf("Prices are equal");
    }

    return 0;
}