#include "main.h"

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
	int len1, len2, total_len;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;

	ptr = (char *)malloc(sizeof(char) * total_len + 1);

	s3 = s1 + s2

	if (n >= len2)
	{
		strcpy(s3, s1);
		strcat(s3, s2);

		return (s3);
	}
	if (n < len2)
	{
		strcpy(s3, s1);
		strncat(s3, s2, n);

		return (s3);
	}
}
