#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum values
 * @max: maximum values
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int size, *result, i;

	if (min > max)
	{
		return (NULL)
	}

	size = max - min + 1;

	result = (int *)malloc(size * sizeof(int));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		result[i] = min + i;
	}
	
	return (result);
}
