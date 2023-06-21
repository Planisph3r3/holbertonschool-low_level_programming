#include <stdio.h>
#include <time.h>
/**
*main - starting program
*
* Description: Prints all the numbers of base 16
*
* Return: Zero equals success
*/
int main(void)
{
int x;
for (x = 48; x <= 57; x++)
{
putchar(x);
}
for (x = 97; x <= 102; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
