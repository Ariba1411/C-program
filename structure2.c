#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter roll, name and marks: ");
    scanf("%d %s %f", &s.roll, s.name, &s.marks);

    printf("\nRoll: %d", s.roll);
    printf("\nName: %s", s.name);
    printf("\nMarks: %.2f", s.marks);

    return 0;
}