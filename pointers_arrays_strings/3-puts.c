#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 *
 *@str: value who stores the string itself
 *
 * Return: Void
 */

void _puts(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
	_putchar(str[a]);
}

}

