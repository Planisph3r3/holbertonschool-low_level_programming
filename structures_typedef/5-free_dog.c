#include <stdlib.h>
#include "dog.h"

/**
 * free_dog: a function that frees alloc memory from
 * the struct dog_t
 *
 *@d: pointer to dog_t variables.
 *
 */
void free_dog(dog_t *d)
	if (d == NULL)
{
	return;
}
else
{
	free(d->name);
	free(d->owner);
	free(d);
}
