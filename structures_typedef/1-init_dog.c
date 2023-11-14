#include "main.h"
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d:
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = {name, age, owner}
}
