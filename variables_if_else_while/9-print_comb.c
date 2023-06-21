#include <stdio.h>
#include <time.h>
/**
*main - starting program
*
* Description: Prints all natural numbers & 0 with ',' in between
*
* Return: Zero equals success
*/
int main(void)
{
int x;
for (x = 48; x < 58; x++)
{
putchar(x);

if (x != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
