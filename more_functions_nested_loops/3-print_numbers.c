#include "main.h"

/**
 * print_numbers - Function will print numbers from 0 to 9 followed by  newline
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
