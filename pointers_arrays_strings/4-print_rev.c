#include "main.h"

/**
 * print_rev - print a certain string backwards on stdout
 *
 * @str: value who stores the string itself
 *
 * Return: Void
 */

void print_rev(char *str)
{
	int i;
for (i = 63; i >= 0; i--)
{
if (str[i] != '\0')
{
_putchar (str[i]);
}
}
_putchar ('\n');
}
