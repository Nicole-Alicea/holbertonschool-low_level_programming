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
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				separator = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s%s", separator, (str == NULL) ? "(nil)" : str);
				separator = ", ";
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
