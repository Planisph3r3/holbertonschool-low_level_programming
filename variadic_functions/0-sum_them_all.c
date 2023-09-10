#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that adds between upcoming parameters
 * from the main function
 *@n: int who stores the number of upcoming parameters
 *
 * Return: 0 means success
*/

int sum_them_all(const unsigned int n, ...)
{
int i, u;
va_list num;

if (n == 0)
{
return (0);
}
va_start(num, n);
u = 0;
for (i = 0; i < n; i++)
{
u += va_arg(num, int);
}
va_end(num);
return (u);
}
