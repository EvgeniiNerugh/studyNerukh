#include <stdio.h>

struct Product {
    char name[50];
    float price;
};

int main() {
    struct Product p[3];
    int i, min = 0;

    for (i = 0; i < 3; i++) {
        printf("Product %d - name: ", i + 1);
        scanf("%s", p[i].name);

        printf("Product %d - price: ");
        scanf("%f", &p[i].price);
    }

    for (i = 1; i < 3; i++) {
        if (p[i].price < p[min].price) {
            min = i;
        }
    }

    printf("Cheapest: %s (%.2f UAH)", p[min].name, p[min].price);

    return 0;
}