#include"stdio.h"
typedef struct student {
    char name[20];
    int age;
    float gpa;
}student;
int main() {
    student a;
    scanf("%s", a.name);
    scanf("%d", &a.age);
    scanf("%f", &a.gpa);
    printf("Name : %s\nAge is %d\nGPA : %.2f", a.name, a.age, a.gpa);
    return 0;
}