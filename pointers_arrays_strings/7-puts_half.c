#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - Function that prints half of a string
 * @str: string that will be used
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int start;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}
	for (int i = start; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
