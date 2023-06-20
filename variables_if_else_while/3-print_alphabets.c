#include <stdio.h>
#include <time.h>
/**
*main - starting program
*
* Description: Printing the alphabet in lowercase, and then in uppercase
*
* Return: Zero equals success
*/
int main(void)
{
char az[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int x;
for (x = 0; x <= 51; x++)
{
putchar(az[x]);
}
putchar('\n');
return (0);
}
