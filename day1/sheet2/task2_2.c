// 2-1Write a program to get the student mark and print the grade depend on the table
#include <stdio.h>

int main()
{
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark < 50)
    {
        printf("Fail.\n");
    }
    else if (mark >= 50 && mark < 65)
    {
        printf("Pass.\n");
    }
    else if (mark >= 65 && mark < 80)
    {
        printf("Good.\n");
    }
    else if (mark >= 80 && mark < 90)
    {
        printf("Very good.\n");
    }
    else
    {
        printf("Excellent.\n");
    }
}
// anthor solution but click Ctrl + Alt + N
// #include <stdio.h>

// int main()
// {
//     int mark;

//     printf("Enter your mark: ");
//     scanf("%d", &mark);

//     switch (mark)
//     {
//     case 0 ... 49:
//         printf("Fail.\n");
//         break;
//     case 50 ... 64:
//         printf("Pass.\n");
//         break;
//     case 65 ... 79:
//         printf("Good.\n");
//         break;
//     case 80 ... 89:
//         printf("Very good.\n");
//         break;
//     case 90 ... 100:
//         printf("Excellent.\n");
//         break;
//     default:
//         printf("Invalid mark.\n");
//     }

//     return 0;
// }
