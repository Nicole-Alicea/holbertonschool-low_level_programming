#include "main.h"
#include <stddef.h>

/**
 * _puts - This function will print a string followed by a new line
 * @str: The string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	if (str == NULL)
	{
		return;
	}
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
