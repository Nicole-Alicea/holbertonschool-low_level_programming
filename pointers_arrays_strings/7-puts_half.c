#include "main.h"

/**
 * puts_half - Function that prints half of a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;

	if(length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	int i;

	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
