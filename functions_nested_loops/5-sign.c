#include "main.h"
/**
 * print_sign - checks for value then prints certain characters
 *
 *@n: value to be compared
 *
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
if (n >= 49)
{
_putchar(43);
return (1);
}
else if (-n)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
