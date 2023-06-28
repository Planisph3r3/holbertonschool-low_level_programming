#include <stdio.h>
/**
 * main - starts program
 *
 * Description: Prints all arguments it receives
 *
 *@argc: argument count
 *@argv: argument value
 *
 * Return: Zero equals success
 */

int main(int argc, char *argv[])
{
	int a;
for (a = 1; a <= argc; a++)
	{
	printf("%s\n", argv[a - 1]);
	}
	return (0);
}
