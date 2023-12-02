#include "main.h"

/**
 * get_bit - This function returns the value of a bit at a given index
 * @index: Index where the value is located; starting from 0
 * @n: The value to be returned
 *
 * Return: Value of the bit at index index or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & mask) != 0 ? 1 : 0);
}
