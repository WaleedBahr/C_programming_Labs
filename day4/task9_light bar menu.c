/*Write a C program to create a light bar menu
using array of strings and handling the arrow keys from keyboard.
(Hint: use the system call function SetConsoleTextAttribute() in windows.h)*/
#include <stdio.h>
#include <windows.h>
#define UP 72
#define DOWN 80
#define ENTER 13

int main() {
    char *menu[] ={"Create", "Load", "Store", "Quit"};
    int choice = 0;

    while (1) {
        system("cls");
        for (int i = 0; i < 4; i++) {
            if (i == choice) {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            } else {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            }
            printf("%s\n", menu[i]);
        }

        int key = getch();

        switch (key) {
            case UP:
                choice--;
                if (choice < 0) {
                    choice = 3;
                }
                break;
            case DOWN:
                choice++;
                if (choice > 3) {
                    choice = 0;
                }
                break;
            case ENTER:
                if (choice == 0) {
                    printf("Create\n");
                } else if (choice == 1) {
                    printf("Load\n");
                } else if (choice == 2) {
                    printf("Store\n");
                } else if (choice == 3) {
                    exit(0);
                }
                break;
        }
    }

    return 0;
}
