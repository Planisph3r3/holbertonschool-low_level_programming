#include "main.h"
/**
 * _isupper - Finds out if a letter is uppercase or not
 *
 * @c: Checked number
 *
 * Return: 0 or 1 depending the result
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
