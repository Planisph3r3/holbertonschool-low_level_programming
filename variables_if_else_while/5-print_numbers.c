#include <stdio.h>
/**
*main - starting program
*
* Description: Prints all single digit numbers of base 10 starting from 0
*
* Return: Zero equals success
*/
int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
printf("%d", a);
}
putchar('\n');
return (0);
}
