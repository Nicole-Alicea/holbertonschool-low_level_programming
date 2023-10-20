#include "main.h"

/**
 * _isupper - This function will check for uppercase characters
 *@c: The character being checked

 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
