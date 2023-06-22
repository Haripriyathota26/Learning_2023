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
int main() {
    const int a = 5;
    struct student stu[a];
    initialize(stu, a);
    printf("Initialized Structured Array:\n");
    for (int i = 0; i < a; i++) {
        printf("Student %d: Roll No - %d, Name - %s, Marks - %.2f\n",i + 1, stu[i].rollno, stu[i].name, stu[i].m);
    }
    return 0;
}