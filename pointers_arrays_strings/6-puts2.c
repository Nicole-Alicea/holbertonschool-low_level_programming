#include "main.h"

/**
 * puts2 - Prints every other character of a string starting with the first
 * @str: String to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	char str;
	int len = strlen(str);

	for (str = 0; str < len; str += 2)
	{
		puts2(str);
	}
	putchar('\n');
}
