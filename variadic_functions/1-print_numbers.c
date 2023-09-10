#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints upcoming parameters
 * from the main function
 *@n: int who stores the number of upcoming parameters
 *@separator: const pointer who stores a string which helps as a separator
 * Return: Void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list num;
va_start(num, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(num, int));
if (separator == NULL)
{
separator = "";
}
if (i != n - 1)
{
printf("%s", separator);
}
}
va_end(num);
printf("\n");
}
