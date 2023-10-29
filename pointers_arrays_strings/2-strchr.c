#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strchr - This function locates a character in a string
 * @c: character to be located
 * @s: string to be analyzed
 *
 * Return: pointer to the first occurence of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
