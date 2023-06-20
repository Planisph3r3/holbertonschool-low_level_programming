#include <stdio.h>
#include <time.h>
/**
*main - starting program
*
* Description: Printing the entire alphabet
*
* Return: Zero equals success
*/
int main(void)
{
char az[] = "abcdefghijklmnopqrstuvwxyz";
int x;
for (x = 0; x <= 25; x++)
{
putchar(az[x]);
}
putchar('\n');
return (0);
}
