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
	printf("%c", (char) va_arg(ap, int));
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
	printf("%f", (float) va_arg(ap, double));
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

	while (s == NULL)
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
	const char *f;
	va_list ap;
	funckey key [4] = { {printf_char, 'c'}, {printf_int, 'i'},
		{printf_float, 'f'}, {printf_string, 's'} };
	int keyind = 0, notfirst = 0;

	f = format;
	va_start(ap, format);

	while (format != NULL && *f)
	{
		if (key[keyind].spec == *f)
		{
			if (notfirst)
				printf(", ");
			notfirst = 1;
			key[keyind].f(ap);
			f++;
			keyind = -1;
		}
		keyind++;
		f += keyind / 4;
		keyind %= 4;
	}
	printf("\n");

	va_end(ap);
}
