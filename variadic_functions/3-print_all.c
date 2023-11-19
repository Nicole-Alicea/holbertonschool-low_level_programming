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
	va_list ap;
	va_start(ap, format);

	char c;
	int i;
	float f;
	char *s;
	int print;

	print = 0;

	while ((c = *format++))
	{
		if (c == 'c')
		{
			i = va_arg(ap, int);
			printf("%c", i)
				print = 1;
		}
		else if (c == 'i')
		{
			i = va_arg(ap, int);
			printf("%d", i);
			print = 1;
		}
		else if (c == 'f')
		{
			f = va_arg(ap, double);
			printf ("%f", f);
			print = 1;
		}
		else if (c == 's')
		{
			s = va_arg(ap, char *);

			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
			print = 1;
		}
		if (print && *format)
		{
			printf(", ");

			print = 0;
		}
	}

	va_end(ap);
	printf("\n");
}
