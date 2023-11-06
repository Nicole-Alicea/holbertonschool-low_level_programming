#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - will concatenate two strings
 * @s1: string to be concatenated
 * @s2: string to be conactenated
 *
 * Return: pointer to newly allocated space in memory which contains the
 * contents of s1 followed by the contents of s2 and null terminated,
 * or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, total_len;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;

	result = (char *)malloc(total_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
