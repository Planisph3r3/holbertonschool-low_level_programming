#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print a name using function pointers
 * @name: string to add
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
