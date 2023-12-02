#include "main.h"

/**
 * flip_bits - This function returns the number of bits you would need
 * to flip to get from one number to another
 * @n: The number of bits needed
 * @m: The number to flip to
 *
 * Return: The number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
