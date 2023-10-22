#include "main.h"

/**
 * print_times_table - This function will print the n times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int result = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');
			}
			if (result < 10)
				_putchar(' ');
			if (result < 100)
				_putchar(' ');
			_putchar((result / 100) + '0');
			_putchar((result / 10) % 10 + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}		
