#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - function that frees dogs
 * @d: pointer
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	dog_t *d = malloc(sizeof(dog_t));
	d->name = malloc(strlen("name") + 1);
	strcpy(d->name, "name");
	d->age = age;

	if (d != NULL)
	{
		free(d->name);
		free(d);
	}
}
