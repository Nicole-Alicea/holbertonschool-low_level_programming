#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src
 *
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest - *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return original_dest;
}
