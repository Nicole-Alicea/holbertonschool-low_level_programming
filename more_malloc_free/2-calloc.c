#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: amount of elements in array
 * @size: size of elements in bytes
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	ptr = (void *)_calloc(nmemb * sizeof(unsigned int));

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == 0)
	{
		return (NULL);
	}
	return (ptr);
}
