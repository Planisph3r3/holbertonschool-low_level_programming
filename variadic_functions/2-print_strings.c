#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints upcoming strings
 * from the main function
 *@n: int who stores the number of upcoming parameters
 *@separator: const pointer who stores a string which helps as a separator
 * Return: Void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i;
va_list string;
va_start(string, n);

for (i = 0; i < n; i++)
{
if (separator == NULL)
{
separator = "";
}
str = va_arg(string, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i != n - 1)
{
printf("%s", separator);
}
}
printf("\n");
}
