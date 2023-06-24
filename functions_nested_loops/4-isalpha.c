#include "main.h"
/**
 * _isalpha - Checks for uppercase character
 *
 *@c: value to be compared
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
