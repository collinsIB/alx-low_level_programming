#include <stddef.h>
#include "dog.h"

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 * @d: pointer to dog
 * @name: the dog name
 * @age: age information
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
