#include<stdio.h>
/**
 * _strlen_recursion - Prints the result of a factorial
 *
 *@n: store the value to be factorized
 *
 * Return: The result of the op. or -1 to indicate an error
 */

int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
if (n == 0)
	{
	return (1);
	}
return (n * factorial(n - 1));
}
