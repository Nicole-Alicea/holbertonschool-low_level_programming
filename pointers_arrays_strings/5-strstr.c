#include "main.h"
#include <stddef.h>

/**
 * _strstr - This function locates a substring in a string
 * @needle: substring to find
 * @haystack: string to search in
 *
 * Return: pointer to the beginning of the located substring,
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *start = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (NULL);
}
