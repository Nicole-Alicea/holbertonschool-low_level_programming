#include "main.h"

/**
 * _strncat - This function concatenates two strings
 * @n: amount of bytes
 * @src: source
 * @dest: destination
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *destEnd = dest;

	while (*destEnd != '\0')
	{
		destEnd++;
	}
	while (*src != '\0' && n > 0)
	{
		*destEnd = *src;
		destEnd++;
		src++;
		n--;
	}
	*destEnd = '\0;

	return (dest);
}
