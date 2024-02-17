#include <stdio.h>
#include <Windows.h>
#include <time.h>
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
void gotoxy(int x, int y) {
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(void) {
    int n;
    int row;
    int col;
    int value;

    printf("Enter an odd number (3 or greater): ");
    scanf("%d", &n);

    if (n % 2 == 0 || n < 3) {
        printf("Please enter an odd number greater than or equal to 3.\n");
        return 1; // Return an error code
    }

    row = 1;
    col = (n + 1) / 2;
    value = 1;

    while (value <= n * n) {
        gotoxy(col*5, row);
        printf("%5d\n", value);
        delay(2);
        if (value % n == 0) {
            row++;
        } else {
            row--;
            col--;
        }

        if (row == 0) row = n;
        if (col == 0) col = n;

        value++;
    }

    return 0;
}
