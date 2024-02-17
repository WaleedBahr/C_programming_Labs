/*A program to create a structure to store the roll no, name, age and store the information of the students in array
.1)write a function the names of all students having age less than a specific age 
.2)write anthor function to display the deatails of student whose role no is given (i.e.roll no.entered by the user)*/
#include <stdio.h>
#include <string.h>

typedef struct {
    int roll_no;
    char name[50];
    int age;
} Student;

// Function to display names of students with age less than a specific age
void displayNamesByAge(Student students[], int size, int specificAge) {
    printf("Names of students with age less than %d:\n", specificAge);
    for (int i = 0; i < size; i++) {
        if (students[i].age < specificAge) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to display details of a student given their roll number
void displayStudentDetailsByRollNo(Student students[], int size, int rollNo) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (students[i].roll_no == rollNo) {
            found = 1;
            printf("Details of student with Roll No %d:\n", rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            break;
        }
    }
    if (!found) {
        printf("Student with Roll No %d not found.\n", rollNo);
    }
}

void main(void) {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student students[n];
    // Input student information
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("===============================\n");
    }

    // Call function to display names of students with age less than a specific age
    int specificAge;
    printf("Enter a specific age: ");
    scanf("%d", &specificAge);
    displayNamesByAge(students, n, specificAge);

    // Call function to display details of a student given their roll number
    int rollNo;
    printf("Enter the Roll No to display details: ");
    scanf("%d", &rollNo);
    displayStudentDetailsByRollNo(students, n, rollNo);

}
