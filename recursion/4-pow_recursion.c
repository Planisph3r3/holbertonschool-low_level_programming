#include "main.h"
/**
 * _pow_recursion - Prints the the value of x raised to the power of y
 *
 *@x: The value to be raised
 *
 *@y: The power
 *
 * Return: The result of the op. or -1 to indicate an error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
{
	return (-1);
}
	if (y == 0)
{
	return (1);
}
	return (x * _pow_recursion(x, y - 1));
}
