#include "main.h"

/**
 * more_numbers - Prints 10 times numbers from 1 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n;
	int m;
for (m = 0; m <= 10; m++)
{
	for (n = 0; n <= 14; n++)
	{
	if (n > 9)
	{
		_putchar((n / 10) + '0');
	}
		_putchar((n % 10) + '0');
}
		_putchar('\n');
}
}
