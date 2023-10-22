#include "main.h"

/**
 * print_times_table - This function will print the n times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int n;

	if (n > 15 || n < 0)
	{
		_putchar(' ');
	}
	else
	{
		print_times_table();
		_putchar('\n');
	}
}		
