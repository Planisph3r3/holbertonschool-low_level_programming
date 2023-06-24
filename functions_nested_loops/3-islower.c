#include "main.h"
/**
 * _islower - Checks for lowercase character
 *
 *@c: Value to be compared
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 121)
{
return (1);
}
else
{
return (0);
}
}
