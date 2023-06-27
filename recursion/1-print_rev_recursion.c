#include "main.h"
/**
 * _print_rev_recursion - prints backwards a string using recursion
 *
 *@s: store the string
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
