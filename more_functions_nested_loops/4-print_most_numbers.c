#include "main.h"

/**
 * print_most_numbers - Prints from 0 to 9 excluding 2&4
 *
 * Return: void
 */
void print_most_numbers(void)
{
int d;
for (d = 48; d <= 57; d++)
{
if (d == 50 || d == 52)
continue;
_putchar(d);
}
_putchar('\n');
}
