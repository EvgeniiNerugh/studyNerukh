#include <stdio.h>

struct Student {
    char name[50];
    int grade;
};

int main() {
    struct Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Student %d - name: ", i + 1);
        scanf("%s", s[i].name);

        printf("Student %d - grade: ", i + 1);
        scanf("%d", &s[i].grade);
    }

    printf("\nResults:\n");

    for (i = 0; i < 3; i++) {
        printf("%d. %s - %d\n", i + 1, s[i].name, s[i].grade);
    }

    return 0;
}