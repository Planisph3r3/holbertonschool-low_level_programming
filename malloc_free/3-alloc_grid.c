#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 *
 *@width: The width(int) of the array
 *@height: The height(int) ofthe array
 *
 * Return: A pointer to an array or NULL if failure.
 */

int **alloc_grid(int width, int height)
{
int **p;
int i;
int j;

p = (int **)malloc(width * sizeof(int *));
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (p == NULL)
{
	return (NULL);
}
for (i = 0; i < width; i++)
{
	p[i] = malloc(sizeof(int) * height);
	if (p[i] == NULL)
	{
	return (NULL);
	}
}
	for (i = 0; i < width; i++)
{
	for (j = 0; j < height; j++)
	{
		p[i][j] = 0;
	}
}
return (p);
free(p);

for (j = 0; j <= i; j++)
{
	free(p[j]);
}
}
