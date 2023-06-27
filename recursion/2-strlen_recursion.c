#include<stdio.h>
/**
 * _strlen_recursion - Prints the length of a string recursively
 *
 *@n: store the string
 *
 * Return: count
 */
int _strlen_recursion(char *n)
{
int count = 0;
	if (*n == '\0')
	{
	return (0);
	}
	else
	{
	count++;
	count = count + _strlen_recursion(n + 1);
	}
	return (count);
}
