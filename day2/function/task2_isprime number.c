#include <stdio.h>
int checkPrime(int);
void main(void)
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
if (checkPrime(n))
printf("%d is a prime number.\n", n);
else
printf("%d is not a prime number.\n", n);

}
int checkPrime(int n)
{
int i;
if (n <= 1)
return 0;
for (i = 2; i <= n / 2; i++) {
if (n % i == 0)
return 0;
}
return 1;
}
