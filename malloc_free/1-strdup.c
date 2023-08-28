#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - Returns a copy of the string given as a pointer
 *
 *@str: pointer to a string
 *
 * Return: A pointer to the duplicated string. NULL if failed
 */



char *_strdup(char *str)
{
	int j = 0;
	int i = 0;
	char *p;

	if (str == NULL)
	{
	return (NULL);
	}

	while (str[i] != '\0')
	{
	i++;
	}

	p = malloc(i + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	while (j <= i)
	{
		p[j] = str[j];
		j++;
	}
		return (p);
}
