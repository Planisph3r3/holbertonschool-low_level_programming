#include <stdio.h>
/**
 * main - starts program
 *
 * Description: Prints the number of arguments passed into it
 *
 *@argc: argument count
 *@argv: argument value
 *
 * Return: Zero equals success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
