#include <stdio.h>
#include <time.h>
/**
*main - starting program
*
* Description: Printing the alphabet in lowercase except q and e letters
*
* Return: Zero equals success
*/
int main(void)
{
char az[] = "abcdfghijklmnoprstuvwxyz";
int x;
for (x = 0; x <= 23; x++)
{
putchar(az[x]);
}
putchar('\n');
return (0);
}
