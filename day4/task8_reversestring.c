//Write a C program to find reverse of a string using pointers.
#include <stdio.h>
void print_reverse(char *s);
void main(void)
{

  char s[1000];
   printf("Enter a string: ");
   gets(s);
   printf("string after reverse is: ");
  print_reverse(s);

  printf("\n");
}

void print_reverse(char *s)
{
  if (*s != '\0')
  {

    print_reverse(s + 1);
    printf("%c", *s);
  }
}
