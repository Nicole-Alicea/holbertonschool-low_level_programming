#include "main.h"

/**
 * _strlen - This function returns the length of a string
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return length;
}
