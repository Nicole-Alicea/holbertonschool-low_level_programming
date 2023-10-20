#include "main.h"

/**
 * print_diagonal - function draws a diagonal line
 * @n: number of times \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		n++;
	}
	else
	{
		_putchar('\\');
		_putchar('\n');
		n++;
	}
}
