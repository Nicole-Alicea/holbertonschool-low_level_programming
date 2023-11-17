#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	const char *str = va_arg(arg, const char *);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s",str);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	
	va_end(arg);
}
