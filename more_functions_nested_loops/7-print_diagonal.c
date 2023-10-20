#include "main.h"

/**
 * print_diagonal - function draws a diagonal line
 * @n: number of times \ should be printed
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
