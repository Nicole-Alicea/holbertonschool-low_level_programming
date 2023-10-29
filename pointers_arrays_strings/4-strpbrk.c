#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strpbrk - This function searches a string for any of a set of bytes
 * @s: string that will be searched
 * @accept: string containing the bytes
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
