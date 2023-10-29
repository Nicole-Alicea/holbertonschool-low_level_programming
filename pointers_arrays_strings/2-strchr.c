#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 *
 *
 *
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
