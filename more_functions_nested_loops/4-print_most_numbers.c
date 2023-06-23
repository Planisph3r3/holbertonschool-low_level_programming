#include "main.h"

/**
 * print_most_numbers - Prints from 0 to 9 excluding 2&4
 *
 * Return: Always 0.
*/

void print_most_numbers(void)
2	{
3	    int d;
4	        for (d = 48; d <= 57; d++)
5	{
6
7	               if (d == 50 || d == 52)
8	               continue;
9	               putchar(d);
10	}
11	        putchar('\n');
12	}
