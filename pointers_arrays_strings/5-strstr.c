#include "main.h"
#include <stddef.h>

/**
 * _strstr - This function locates a substring
 * @needle: substring
 * @haystack: string
 *
 * Return: pointer to the beginning of the located substring,
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *start, pattern;

	while (haystack)
	{
		start = haystack;
		pattern = needle;

		while (*haystack && *pattern && *haystack == pattern)
		{
			haystack++;
			pattern++;
		}
		if (!pattern)
			return (start);

		haystack = start + 1;
	}
	return (NULL);
}
