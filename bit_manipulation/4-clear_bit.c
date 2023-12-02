#include "main.h"

/**
 * clear_bit - This function sets the value of a bit to 0 at a given index
 * @n: Pointer to the value
 * @index: Index to the value; starting from 0 of the bit you want to set
 *
 * Return: 1 if it works or -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= mask;

	return (1);
}
