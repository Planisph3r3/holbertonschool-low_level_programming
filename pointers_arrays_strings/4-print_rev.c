#include "main.h"

/**
 * print_rev - print a certain string backwards on stdout
 *
 * @str: value who stores the string itself
 *
 * Return: Void
 */
void print_rev(char *s)
{
int i, j, length;
i = 0;
while (s[i] != '\0')
{
i++;
}
length = i;

for (k = length - 1; k >= 0; k--)
{
_putchar(s[j]);
}
_putchar('\n');
}
