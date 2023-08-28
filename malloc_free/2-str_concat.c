#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  function that concatenates two strings
 * @s1:a pointer
 * @s2:a pointer
 *
 * Return: a pointer or NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	char *p1, *p2;
	int i = 0;
	int j = 0;
	int k = 0, l = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
	i++;
	}
	while (s2[j] != '\0')
	{
	j++;
	}
p1 = malloc(i);
p2 = malloc(j + 1);

	if (p1 == NULL || p2 == NULL)
	{
	return (NULL);
	}
		while (k <= i)
		{
		p1[k] = s1[k];
		k++;
		}
		while (l <= j)
		{
		p2[l] = s2[l];
		l++;
		}
		strcat(p1, p2);
		return (p1);
}
