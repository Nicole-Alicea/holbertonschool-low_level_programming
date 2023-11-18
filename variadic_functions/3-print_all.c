#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - will print a char
 * @ap: argument pointer
 *
 * Return: void
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - will print an integer
 * @ap: argument pointer
 *
 * Return: void
 */

void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - will print a float
 * @ap: argument pointer
 *
 * Return: void
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - will print a string
 * @ap: argument pointer
 *
 * Return: void
 */

void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
	{
		printf("(nil)");

		return;
	}
	printf("%s", s);
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	print_type types[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list ap;
	char *separator = '';
	int i = 0;
	int j = 0;

	va_start(ap, format);

	while (format && format[i])
	{
		while (types[j].type)
		{
			if (*types[j].type == format[i])
			{
				printf("%s", separator);
				types[j].f(ap);
				separator = ", ";
			}
			j++;
		}
		j = 0;

		i++;
	}
	printf("\n");

	va_end(ap);
}
