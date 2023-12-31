#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - This function concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: number of bytes that will be used from s2
 *
 * Return: pointer to a newly allocated space in memory containing
 * concatenated strings or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, total_len;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + n;

	s3 = (char *)malloc(sizeof(char) * (total_len + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
	strcpy(s3, s1);

	if (n >= len2)
	{
		strcat(s3, s2);
	}
	else
	{
		strncat(s3, s2, n);
	}

	return (s3);
}
