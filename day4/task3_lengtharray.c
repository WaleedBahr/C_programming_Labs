//Write a program in C to calculate the length of the string using a pointer.
#include <stdio.h>
void main(void) {
    char arr[50];
    char *ptr = arr;  

    printf("Enter a string: ");
    gets(arr);
    while (*ptr != '\0') {
        ptr++;
    }

    int length = ptr - arr; //start string - end string =lenth

    printf("Length of the string: %d\n", length);
}
//anthor solution :
//#include <stdio.h>

// void main(void) {
//     char str[20];
//     int length;
//     printf("Enter the string ? ");
//     gets(str);
//     length=str_length(str);
//     printf("the length of string is %d",length);
// }
// int str_length(char*s){
//     int i=0;
//     while(*s++ !='\0')
//         i++;
//     return i;
// }
