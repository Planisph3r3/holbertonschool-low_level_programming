#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: array to be printed
 * @n: number of elements to print
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
int counter;

for (counter = 0; counter < n; counter++)
{
if (counter == 0)
{
printf("%d", a[counter]);
}
else
{
printf(", %d", a[counter]);
}
}
printf("\n");
}
