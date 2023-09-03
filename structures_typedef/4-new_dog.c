#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *new_dog - function to print new dog data
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: New dog data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *alloc;
	int j = 0;
	int i = 0;

	alloc = malloc(sizeof(dog_t));
	if (alloc == NULL)
		return (NULL);
	while (name[j] != '\0')
		j++;
	while (owner[i] != '\0')
		i++;
	alloc->name = malloc((j + 1) * sizeof(char));
	alloc->owner = malloc((i + 1) * sizeof(char));
	if (alloc->name == NULL || alloc->owner == NULL)
	{
		free(alloc->name);
		free(alloc->owner);
		free(alloc);
		return (NULL);
	}
	j = 0;
	i = 0;
	while (name[j] != '\0')
	{
		alloc->name[j] = name[j];
		j++;
	}
	while (owner[i] != '\0')
	{
		alloc->owner[i] = owner[i];
		i++;
	}
	alloc->name[j] = '\0';
	alloc->owner[i] = '\0';
	alloc->age = age;
	return (alloc);
