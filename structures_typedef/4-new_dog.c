#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - finds the length of a string
 * @s: string to be used
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - will copy the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer where the string will be copied
 * @src: string that will be copied
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog or NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len1 = _strlen(name), len2 = _strlen(owner);
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = malloc(sizeof(char) * (len1 + 1));
	newDog->owner = malloc(sizeof(char) * (len2 + 1));

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);

		return (NULL);
	}

	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);

	newDog->age = age;

	return (newDog);
}
