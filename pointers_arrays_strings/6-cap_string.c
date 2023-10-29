#include "main.h"

/**
 * cap_string - This function capitalizes all words of a string
 *
 * Return: input
 */

char *cap_string(char *str)
{
	char *ptr = str;

	if (ptr && *ptr  >= 'a' && *ptr <= 'z')
		*ptr = (*ptr - 32);

	while (*ptr)
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' || *ptr == ';' || *ptr == '.' ||
				*ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			if (*(ptr + 1) && *(ptr +1) >= 'a' && *(ptr + 1) <= 'z')
				*(ptr + 1) = (*(ptr + 1) - 32);
		}
		ptr++;
	}
	return (str);
}
