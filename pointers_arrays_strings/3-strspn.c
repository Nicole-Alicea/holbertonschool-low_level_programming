#include "main.h"

/**
 * _strspn - This function gets the length of a prefix substring
 *
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s)
	{
		found = 0;
		int i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
			i++;
		}
		if (!found)
		{
			break;
		}
		s++;
	}
	return (count);
}
