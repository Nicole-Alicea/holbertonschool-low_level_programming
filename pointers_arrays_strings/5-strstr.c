#include "main.h"
#include <stddef.h>

/**
 *
 *
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
