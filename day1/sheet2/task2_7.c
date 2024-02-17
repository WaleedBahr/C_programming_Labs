//7-calculate the income tax based on the income tax depend on the following table :
#include <stdio.h>
int main()
{
int income;
float tax;
printf("Enter your income: ");
scanf("%d", &income);
if(income <= 7000)
{
tax = 0;
}
else if(income > 7000 && income <= 20000)
{
tax = income * 0.1;
}
else if(income > 20000 && income <= 45000)
{
tax = income * 0.15;
}
else if(income > 45000 && income <= 200000)
{
tax = income * 0.2;
}
else
{
tax = income * 0.4;
}
printf("Your tax is: %.3f\n", tax);

}
