#include "main.h"

/**
 * _strcat - This function concatenates two strings
 * @src: source
 * @dest: destination
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
