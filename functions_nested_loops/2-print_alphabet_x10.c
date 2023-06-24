#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet x10
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
char abc;
int counter = 0;
for (counter = 0; counter <= 9; counter++)
{
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
}
}
_putchar('\n');
}
