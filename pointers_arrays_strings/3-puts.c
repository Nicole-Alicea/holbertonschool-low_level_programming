#include "main.h"

/**
 * _puts - This function will print a string followed by a new line
 *
 * Return: void
 */

void _puts(char *str)
{
	_puts(*str);
	_puts('\n');
}
