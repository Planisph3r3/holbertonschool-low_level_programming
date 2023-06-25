#include "main.h"

/**
 * print_diagonal - prints a backslash after a certain
 * number of space characters
 *
 *@n: value to be compared
 *
 * Return: Void
 */
void print_diagonal(int n)
{
int m;
int o;
if (n <= 0)
{
	_putchar('\n');
}
else
{
for (m = 0; (m < n); m++)
{
	for (o = 0; o < n; o++)
	{
	if (o == m)
		_putchar('\\');
	else if (o < m)
		_putchar(' ');
	}
	_putchar('\n');
}

}
}
