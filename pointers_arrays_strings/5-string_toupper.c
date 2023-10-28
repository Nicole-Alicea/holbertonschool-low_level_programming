#include "main.h"

/**
 * string_toupper - This function changes lowercase letters to uppercase
 * @str: string to be manipulated
 *
 * Return: original
 */

char *string_toupper(char *)
{
	if (str == NULL)
	{
		return(NULL);
	}
	char *original = str;

	while (*str != '\0')
	{
		*str = toupper(*str);
		str++;
	}
	return (original);
}
