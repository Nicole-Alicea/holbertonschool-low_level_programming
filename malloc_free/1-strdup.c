#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string or NULL if str = NULL
 * or there is insufficient memory
 */

char *_strdup(char *str)
{
	size_t len;
	char *newStr;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	newStr = (char *)malloc(len + 1);

	if (newStr == NULL)
	{
		return (NULL);
	}
	strcpy(newStr, str);

	return (newStr);
}
