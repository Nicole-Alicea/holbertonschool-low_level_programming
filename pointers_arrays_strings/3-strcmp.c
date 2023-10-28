#include "main.h"

/**
 * _strcmp - This function compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
