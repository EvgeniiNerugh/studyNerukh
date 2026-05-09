#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

struct Segment {
    struct Point start;
    struct Point end;
};

int main() {
    struct Segment s;
    float len;

    printf("Start point - x: ");
    scanf("%f", &s.start.x);

    printf("Start point - y: ");
    scanf("%f", &s.start.y);

    printf("End point - x: ");
    scanf("%f", &s.end.x);

    printf("End point - y: ");
    scanf("%f", &s.end.y);

    len = sqrt((s.end.x - s.start.x) * (s.end.x - s.start.x) +
               (s.end.y - s.start.y) * (s.end.y - s.start.y));

    printf("Segment length: %.2f", len);

    return 0;
}