#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - structure for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif
