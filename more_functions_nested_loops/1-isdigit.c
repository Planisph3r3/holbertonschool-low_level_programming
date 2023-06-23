#include "main.h"
/**
 * _isdigit - Finds out if is a number or not
 *
 * @c: Checked number
 *
 * Return: 0 or 1 depending the result
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
