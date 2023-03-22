#include "main.h"

#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog with specified values
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if malloc fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *newname, *newowner;

	/* Allocate memory for the new dog struct */
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	/* Allocate memory for the new name string */
	newname = malloc(strlen(name) + 1);
	if (newname == NULL)
	{
		free(newdog);
		return (NULL);
	}

	/* Allocate memory for the new owner string */
	newowner = malloc(strlen(owner) + 1);
	if (newowner == NULL)
	{
		free(newname);
		free(newdog);
		return (NULL);
	}

	/* Copy the values to the new dog struct */
	strcpy(newname, name);
	strcpy(newowner, owner);
	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;

	/* Return the new dog */
	return (newdog);
}
