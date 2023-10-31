#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - This function returns the length of a string
 * @s: The string to be measured
 *
 * Return: strlen
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
