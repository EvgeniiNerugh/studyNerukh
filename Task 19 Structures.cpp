#include <stdio.h>

struct Point {
    float x;
    float y;
};

struct Rectangle {
    struct Point leftBottom;
    struct Point rightTop;
};

int main() {
    struct Rectangle r;
    float width, height, area;

    printf("Bottom-left - x: ");
    scanf("%f", &r.leftBottom.x);

    printf("Bottom-left - y: ");
    scanf("%f", &r.leftBottom.y);

    printf("Top-right - x: ");
    scanf("%f", &r.rightTop.x);

    printf("Top-right - y: ");
    scanf("%f", &r.rightTop.y);

    width = r.rightTop.x - r.leftBottom.x;
    height = r.rightTop.y - r.leftBottom.y;

    area = width * height;

    printf("Area: %.2f", area);

    return 0;
}