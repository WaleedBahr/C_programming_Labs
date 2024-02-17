//Write a C program to compare two strings using pointers.
#include <stdio.h>
#include <string.h>
void main(void) {
    char str1[100];
    char str2[100];
    int i;

    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    char *p1 = str1;
    char *p2 = str2;
    int result = strcmp(p1, p2);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string smaller than the second string Alphabetically.\n");
    } else {
        printf("The first string is larger than the second string Alphabetically.\n");
    }

}
