#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest: destination
 * @src: source
 * @n: integer
 *
 * Return: destination start
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (dest_start);
}
