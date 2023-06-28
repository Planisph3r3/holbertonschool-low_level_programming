#include <stdio.h>
#include <stdlib.h>
/**
 * main - starts program
 *
 * Description: Prints the multiplication of two numbers.
 *
 *@argc: argument count
 *@argv: argument value
 *
 * Return: Zero equals success
 */

int main(int argc, char *argv[])
{
int n1;
int n2;

if (argc != 3)
{
printf("Error\n");
return (1);
}

n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
printf("%d\n", (n1)*(n2));
return (0);
}
