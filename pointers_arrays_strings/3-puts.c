#include <unistd.h>
#include "main.h"

/**
 * _puts - prints a string on stderr
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
write(2, &str[a], 1);
}
_putchar('\n');
}
