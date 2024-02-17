/*A C program to store information for maximum 100 students each student has the following structure:
b) Write the previous program using array of pointer to struct instead of array of struct 
and calculate the memory used to store information for 20 student from 100 student.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct xx {
    char id_num[10];
    char name[20];
    char gender;
    int age;
} student;

void main(void) {
    student* students[100];  // Array of pointers to struct
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        students[i] = (student*)malloc(sizeof(student));  // Allocate memory for each student
        fflush(stdin);
        printf("num_id of student %d = ", i + 1);
        gets(students[i]->id_num);
        printf("name of student %d = ", i + 1);
        gets(students[i]->name);
        printf("age of student %d = ", i + 1);
        scanf("%d", &students[i]->age);
        printf("gender of student %d = ", i + 1);
        scanf(" %c", &students[i]->gender);

        printf("==================================\n");
    }

    // Sort students by name
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[i]->name, students[j]->name) > 0) {
                student* temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("Students information sorted by name:\n");
    printf("name\tnum_id\t age\tgender\n");
    printf("------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t  %s\t  %d\t  %c\n", students[i]->name, students[i]->id_num, students[i]->age, students[i]->gender);
    }

    // Free allocated memory for each student
    for (int i = 0; i < n; i++) {
        free(students[i]);
    }

    // Calculate memory used for 20 students
    int memory_used = sizeof(student) * 20;
    printf("===================================\n");
    printf("Memory used for 20 students: %d bytes\n", memory_used);
}
