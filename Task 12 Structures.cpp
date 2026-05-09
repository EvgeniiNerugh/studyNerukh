#include <stdio.h>

struct Student {
    char name[50];
    int grade;
};

int main() {
    struct Student s[3];
    int i, max = 0;

    for (i = 0; i < 3; i++) {
        printf("Student %d - name: ", i + 1);
        scanf("%s", s[i].name);

        printf("Student %d - grade: ", i + 1);
        scanf("%d", &s[i].grade);
    }

    for (i = 1; i < 3; i++) {
        if (s[i].grade > s[max].grade) {
            max = i;
        }
    }

    printf("Best student: %s (%d)", s[max].name, s[max].grade);

    return 0;
}