#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - start program
*
* Description: Printing and comparing the last digit of a number
*
* Return: Zero equals success
*/
int main(void)
{
int n;
char m = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
else if (m == 0)
{
printf("Last digit of %d is %d and is 0\n", n, m);
}
else if (m != 0, m < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
}
return (0);
}
