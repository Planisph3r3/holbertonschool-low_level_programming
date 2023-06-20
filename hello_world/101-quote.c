#include <unistd.h>
#include <string.h>
/**
 * main - Starting program
 *
 * Description: Printing without printf and puts
 *
 * Return: One equal success
*/
int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19.";
int len = strlen(msg);
write(STDERR_FILENO, msg, len);
return (1);
}
