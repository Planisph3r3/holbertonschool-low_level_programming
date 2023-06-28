#include <stdio.h>
/**
 * main - starts program
 *
 * Description: Prints the name of the program itself
 *
 *@argc: argument count
 *@argv: argument value
 *
 * Return: Zero equals success
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
