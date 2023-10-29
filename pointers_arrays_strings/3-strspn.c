#include "main.h"

/**
 * _strspn - This function gets the length of a prefix substring
 * @s: initial segment
 * @accept: The bytes from here are what s consists of
 *
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}
		if (!found)
		{
			break;
		}
		count++;
		s++;
		accept = accept - count;
	}
	return (count);
}
