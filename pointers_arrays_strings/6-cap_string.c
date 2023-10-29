#include "main.h"
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

/**
 * cap_string - This function capitalizes all words of a string
 *
 * Return: input
 */

char *cap_string(char *input)
{
	char ptr = input;

	if (ptr >= 'a' && *ptr <= 'z')
		ptr = (ptr & ~32);

	while (ptr)
	{
		if (ptr == ''; *ptr == '\t'; *ptr == '\n'; *ptr == ','; *ptr == ';'; *ptr == '.';
				*ptr == '!'; *ptr == '?'; *ptr == ""; *ptr == '('; *ptr == ')'; *ptr == '{'; *ptr == '}')
		{
			if ((ptr + 1) && (*(ptr +1) >= 'a' && *(ptr + 1) <= 'z')) (ptr + 1) = ((ptr + 1) & ~32);
		}
		ptr++;
	}
	return (input);
}
