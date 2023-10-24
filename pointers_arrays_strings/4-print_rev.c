#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_rev - This function will print a string, in reverse, followed by a new line
 * @s: string that will be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length = strlen(s);
	int i = length - 1;

	if (s == NULL)
	{
		return;
	}
	while (s != NULL)
	{
		putchar(s[i]);
		s--:
	}
	putchar('\n');
}
