#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * free_dog: a function that frees alloc memory from
 * the struct dog_t
 *@d: pointer to dog_t variables.
 *
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
	exit(0);
}
else
{
	free(d->name);
	free(d->owner);
	free(d);
}
}
