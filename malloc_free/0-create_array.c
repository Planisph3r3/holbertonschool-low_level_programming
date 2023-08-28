#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates a pointer which points to an arrays of chars
 *
 *@size: size of the pointer
 *@c: character which initializes the pointer
 *Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
p = malloc(size	* sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
	p[i] = c;
	i++;
	}
	return (p);
}
