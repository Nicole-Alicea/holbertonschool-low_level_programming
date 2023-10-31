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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
