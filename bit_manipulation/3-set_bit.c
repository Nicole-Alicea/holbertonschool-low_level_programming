#include "main.h"

/**
 * set_bit - This function sets the value of a bit to 1 at a given index
 * @n: Pointer to the value
 * @index: Index where the value is located; starting from 0 of the bit
 * you want to set
 *
 * Return: 1 if it works or -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);

	return (1);
}
