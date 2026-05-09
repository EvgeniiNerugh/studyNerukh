#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    struct Date date;
};

int main() {
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter day: ");
    scanf("%d", &s.date.day);

    printf("Enter month: ");
    scanf("%d", &s.date.month);

    printf("Enter year: ");
    scanf("%d", &s.date.year);

    printf("%s was born on %02d.%02d.%d",
           s.name, s.date.day, s.date.month, s.date.year);

    return 0;
}