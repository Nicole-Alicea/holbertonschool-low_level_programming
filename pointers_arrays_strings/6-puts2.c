#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string starting with the first
 * @str: String to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int g;
	int c;
	char *s = str;

	for (c = 0; *str != '\0'; c++)
	{
		str++;
	}
	for (g = 0; g < c; g = g + 2)
	{
		putchar(s[g]);
	}
	putchar('\n');
}
