#include <stdio.h>

/**
*main - starting program
*
* Description: Prints all single digit numbers of base 10 starting from 0 using putchar
*
* Return: Zero equals success
*/
int main(void)
{
int a;
for (a = 48; a < 58; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
