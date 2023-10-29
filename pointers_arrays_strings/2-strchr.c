#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr - This function locates a character in a string
 * @c: character to be located
 * @s: string to be analyzed
 *
 * Return: pointer to the first occurence of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
