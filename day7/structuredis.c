#include <stdio.h>
#include <string.h>
struct student {
    int rollno;
    char name[20];
    float m;
};
void initialize(struct student *stu, int a) {
    for (int i = 0; i < a; i++) {
        printf("Enter details for Student %d:\n", i + 1); 
        printf("Roll No: ");
        scanf("%d", &(stu[i].rollno));
        printf("Name: ");
        scanf("%s", stu[i].name);
        printf("Marks: ");
        scanf("%f", &(stu[i].m));
        printf("\n");
    }
}
void display(const struct tsudent *stu, int a) {
    printf("Structured Array:\n");
    for (int i = 0; i < a; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", stu[i].rollno);
        printf("Name: %s\n", stu[i].name);
        printf("Marks: %.2f\n", stu[i].m);
        printf("\n");
    }
}
int main() {
    const int a = 5;
    struct student stu[a];
    initialize(stu, a);
    display(stu, a);
    return 0;
}