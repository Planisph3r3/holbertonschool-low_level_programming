#include <stdio.h>
#include <time.h>
/**
*main - starting program
*
* Description: Prints the lowercase alphabet in reverse
*
* Return: Zero equals success
*/
int main(void)
{
char az[] = "zyxwvutsrqponmlkjihgfedcba";
int x;
for (x = 0; x <= 25; x++)
{
putchar(az[x]);
}
putchar('\n');
return (0);
}
