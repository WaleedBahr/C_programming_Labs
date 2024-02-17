#include <stdio.h>
int main()
{
int counter=0;
int number=0;
char ch;
printf("Enter an integer value with maximum 5 digits: ");
while ((ch=getch())!='\r'){
    switch (ch)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
             if(counter<5){
                putch(ch);
                number=number*10+ch-'0';
                counter++;
             }
             break;
          case 8:
            if(counter>0 ){

            putch('\b');
            putch(' ');
            putch('\b');
            counter--;
            number = number /10;
            }
            break;
}

}
         printf("\nyou get an integer value : %d ",number);
}
