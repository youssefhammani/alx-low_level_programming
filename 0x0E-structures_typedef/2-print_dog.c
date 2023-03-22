#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: struct dog.
 *
 * Return: no return.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name : %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age : %.6f\n", (d->age != NULL) ? d->age : "(nil)");
		printf("Owner : %s\n", (d->Owner != NULL) ? d->Owner : "(nil)");
	}
}
