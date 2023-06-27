#include<stdio.h>
#include <unistd.h>

/**
 *_puts_recursion - prints a string using recursion
 *
 *@s: store the string
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
	write(1, s, 1);
	_puts_recursion(s + 1);
}
else
	putchar('\n');
}
