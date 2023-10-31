#include "main.h"

/**
 * _print_rev_recursion - This function prints a string in reverse
 * @s: The string that will be printed in reverse
 * @n: The string but reversed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char start = *s;
		*s = *n;
		*n = start;

	if (*s == '\0')
	{
		return;
	}
	_putchar(*n);
	_print_rev_recursion(n - 1);
}
