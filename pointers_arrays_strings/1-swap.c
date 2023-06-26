#include <stdio.h>
/**
 * swap_int - swaps values between 2 variables
 *
 *@a: first variable
 *@b: second variable
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{

int c = *b;

*b = *a;

*a  = c;
}
