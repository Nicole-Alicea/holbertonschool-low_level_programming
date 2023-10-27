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
	int start_index;
	int i;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
