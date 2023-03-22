#include "dog.h"

/**
 * init_dog - initializes a struct dog
 * @d: pointer to the struct dog to initialize
 * @name: name to set
 * @age: age to set
 * @owner: owner to set
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
