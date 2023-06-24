#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 *@a: value to take the last digit
 *
 * Return: b
 */
int print_last_digit(int a)
{
int b;
b = a % 10;
if (b < 0)
{
b = b * -1;
}
		_putchar(b + 48);
return (b);

}
