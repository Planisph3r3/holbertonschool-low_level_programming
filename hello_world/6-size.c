#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Printing the size various types on StdOut
 *
 * Return: Zero equals success
*/
int main(void)
{
char a = 'a';
int b = 'b';
long int c = 'c';
long long int d = 'd';
float e = 'e';
printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of an int: %lu byte(s)\n", sizeof(b));
printf("Size of a long int: %lu byte(s)\n", sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(e));
return (0);
}
