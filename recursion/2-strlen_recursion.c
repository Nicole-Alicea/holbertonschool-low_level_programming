#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - This function returns the length of a string
 * @s: The string to be measured
 * @strlen: The length of the string
 *
 * Return: strlen
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		_strlen_recursion(s + 1);
	}
	_putchar(strlen);
	return (0);
}
