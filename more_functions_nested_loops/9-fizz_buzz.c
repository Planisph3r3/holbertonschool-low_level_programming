#include <stdio.h>
/**
 * main - prints from n#1-100 with a catch
 *
 * Description: multiples of three print Fizz &
 * for the multiples of five print Buzz. If both
 * prints FizzBuzz
 *
 * Return: Void
 */
int main(void)
{
	int a;
for (a = 1; a <= 100; a++)
{
	if ((a % 3 == 0) && (a % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (a % 5 == 0)
	{
		printf("Buzz");
	}
	else if (a % 3 == 0)
	{
		printf("Fizz");
	}
	else
	{
		printf("%d", a);
	}
	if (a != 100)
	{
		printf(" ");
	}
}
printf("\n");
return (0);
}
