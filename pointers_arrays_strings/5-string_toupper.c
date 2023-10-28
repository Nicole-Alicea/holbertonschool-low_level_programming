#include "main.h"
#include <stddef.h>
#include <ctype.h>

/**
 * string_toupper - This function changes lowercase letters to uppercase
 * @str: string to be manipulated
 *
 * Return: original
 */

char *string_toupper(char *str)
{
	char *original = str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		*str = (char)toupper((unsigned char)*str);
		str++;
	}
	return (original);
}
