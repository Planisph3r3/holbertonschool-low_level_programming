#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src with \0
 * to the buffer pointed to by dest
 * @dest: pointer who recieves the copied string
 * @src: copied string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int length, counter;

for (length = 0; src[length] != 0; length++)
{	
}
for (counter = 0; counter < length; counter++)
{
dest[counter] = src[counter];
}
dest[counter] = '\0';

return (dest);
}
