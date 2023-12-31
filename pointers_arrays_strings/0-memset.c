#include "main.h"

/**
 * _memset - This function fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes of the memory area pointed to by s
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
