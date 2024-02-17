//Write a C program to concatenate two strings using pointers.
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100];
    char str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    char *p1 = str1;
    char *p2 = str2;
    while (*p1 != '\0') {
        p1++;
    }
    strcat(str1, " ");
    strcat(p1, p2);
    printf("Concatenated string: %s\n", str1);
}
