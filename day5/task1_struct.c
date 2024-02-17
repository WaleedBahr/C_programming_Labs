/*A C program to create 2 variables that can hold student information which is nonhomogeneous type:
 Student code, student name, gender, age. Read information for two student and print information for the eldest student.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) {
    struct Student {
    int stu_code;
    int stu_age;
    char stu_name[10];
    char stu_gender;
};
struct Student stu1, stu2, eldest;
printf("Enter information for student 1:\n");
    printf("Student Code: ");
    scanf("%d", &stu1.stu_code);
    printf("Name: ");
    scanf("%s", stu1.stu_name);
    printf("Gender (M/F): ");
    scanf(" %c", &stu1.stu_gender);
    printf("Age: ");
    scanf("%d", &stu1.stu_age);
   printf("\nEnter information for student 2:\n");
    printf("Student Code: ");
    scanf("%d", &stu2.stu_code);
    printf("Name: ");
    scanf("%s", stu2.stu_name);
    printf("Gender (M/F): ");
    scanf(" %c", &stu2.stu_gender);
    printf("Age: ");
    scanf("%d", &stu2.stu_age);

    if (stu1.stu_age > stu2.stu_age) {
        eldest = stu1;
    } else {
        eldest = stu2;
    }

    printf("Eldest student : code = %d, name = %s, gender = %c, age = %d\n",
           eldest.stu_code, eldest.stu_name, eldest.stu_gender, eldest.stu_age);

}
