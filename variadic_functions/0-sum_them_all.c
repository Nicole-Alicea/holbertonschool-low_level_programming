#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all of its parameters
 * @n: number to be added
 *
 * Return: sum of all its parameters or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
