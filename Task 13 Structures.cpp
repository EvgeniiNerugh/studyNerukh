#include <stdio.h>

struct Student {
    char name[50];
    int grade;
};

int main() {
    struct Student s[3];
    int i, sum = 0;
    float avg;

    for (i = 0; i < 3; i++) {
        printf("Student %d - name: ", i + 1);
        scanf("%s", s[i].name);

        printf("Student %d - grade: ", i + 1);
        scanf("%d", &s[i].grade);

        sum = sum + s[i].grade;
    }

    avg = sum / 3.0;

    printf("Average grade: %.2f", avg);

    return 0;
}