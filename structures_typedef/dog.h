#ifndef DOG_H
#define DOG_H

/*
 * struct dog - structure made for the dog.
 *
 *@name: Name of the dog.
 *@age: Age of the dog.
 *@owner: Owner of the dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*
 * struct dog_t - structure made for the dog.
 *
 *@name: Name of the dog.
 *@age: Age of the dog.
 *@owner: Owner of the dog.
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
