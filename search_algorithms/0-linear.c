#include "search_algos.h"

/**
 * linear_search - This function searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Comparing %d with %d\n", array[i], value);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
