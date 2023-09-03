#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initializes a variable of type struct dog
 *
 * @d: pointer that points to dog's struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
if (d == NULL)
{
	d = malloc(sizeof(struct dog));
}
}
