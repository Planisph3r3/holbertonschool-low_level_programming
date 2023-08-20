#include "main.h"

/**
 * print_rev - print a certain string backwards on stdout
 *
 * @s: value who stores the string itself
 *
 * Return: Void
 */
void print_rev(char *s)
{
int i, k, length;
i = 0;
while (s[i] != '\0')
{
i++;
}
length = i;

for (k = length - 1; k >= 0; k--)
{
_putchar(s[k]);
}
_putchar('\n');
}
