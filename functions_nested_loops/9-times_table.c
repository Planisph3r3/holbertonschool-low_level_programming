#include "main.h"

/**
 * times_table - Prints a table using a function
 *
 * Description: Print 9 times table
 * Return: Void
 */

void times_table(void)
{
	int i;
	int j;
	int result;

for (i = 0; i <= 9; i++)
{
_putchar('0');
for (j = 1; j <= 9; j++)
{
_putchar(',');
_putchar(' ');
result = i * j;
if (result <= 9)
{
_putchar(' ');
}
else
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
