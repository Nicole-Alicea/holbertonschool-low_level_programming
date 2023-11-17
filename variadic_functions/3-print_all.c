#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	va_start(arg, format);

	const char *ptr = format;

	while (*ptr != '\0')
	{
		char c;
		int i;
		float f;
		char *s;
		
		if (*ptr == 'c')
		{
			c = (char)va_arg(arg, int);
			printf("%c", c);
		}
		else if (*ptr == 'i')
		{
			i = va_arg(arg, int);
			printf("%d", i);
		}
		else if (*ptr == 'f')
		{
			f = (float)va_arg(arg, double);
			printf("%f", f);
		}
		else if (*ptr == 's')
		{
			s = va_arg(arg, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		ptr++;
	}
	printf("\n");

	va_end(arg);
}
