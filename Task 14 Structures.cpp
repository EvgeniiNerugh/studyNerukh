#include <stdio.h>

struct Product {
    char name[50];
    float price;
    int quantity;
};

int main() {
    struct Product p[3];
    int i;
    float total = 0;

    for (i = 0; i < 3; i++) {
        printf("Product %d - name: ", i + 1);
        scanf("%s", p[i].name);

        printf("Product %d - price: ", i + 1);
        scanf("%f", &p[i].price);

        printf("Product %d - quantity: ", i + 1);
        scanf("%d", &p[i].quantity);

        total = total + p[i].price * p[i].quantity;
    }

    printf("Total warehouse value: %.2f UAH", total);

    return 0;
}