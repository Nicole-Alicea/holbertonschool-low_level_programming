#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that will print anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if ((format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's') && (((format[i] == 'c')
					? (printf("%c", va_arg(args, int)), 1) :
					(format[i] == 'i') ? (printf("%d", va_arg(args, int)), 1) :
					(format[i] == 'f') ? (printf("%f", va_arg(args, double)), 1) :
					((format[i] == 's') ? ((str = va_arg(args, char *))
					? (printf("%s", str), 1) :
					(printf("(nil)"), 1)) : 0)) && format[i + 1] != '\0'))
				{
					printf(", ");
				}
		i++;
	}
	printf("\n");

	va_end(args);
}
