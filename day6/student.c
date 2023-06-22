#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[50];
    int roll;
    float m;
};
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student* students = (struct student*)malloc(n * sizeof(struct student));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("\nEnter student details %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].m);
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].m);
    }
    free(students);
    return 0;
}
