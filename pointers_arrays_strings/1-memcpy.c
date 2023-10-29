#include "main.h"

/**
 * _memcpy - This function copies memory area
 * @n: the amount of bytes copied
 * @src: source memory area
 * @dest: destination memory area
 *
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_start = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (dest_start);
}
