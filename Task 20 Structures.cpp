#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Time {
    int hours;
    int minutes;
};

struct Event {
    char name[50];
    struct Date date;
    struct Time time;
};

int main() {
    struct Event e;

    printf("Event name: ");
    scanf("%s", e.name);

    printf("Date - day: ");
    scanf("%d", &e.date.day);

    printf("Date - month: ");
    scanf("%d", &e.date.month);

    printf("Date - year: ");
    scanf("%d", &e.date.year);

    printf("Time - hours: ");
    scanf("%d", &e.time.hours);

    printf("Time - minutes: ");
    scanf("%d", &e.time.minutes);

    printf("Event: %s\n", e.name);
    printf("When: %02d.%02d.%d at %02d:%02d",
           e.date.day, e.date.month, e.date.year,
           e.time.hours, e.time.minutes);

    return 0;
}