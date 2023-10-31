#include "main.h"

/**
 * _puts_recursion - This function will print a string followed by a new line
 * @s: string that will be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
