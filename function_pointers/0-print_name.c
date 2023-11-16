#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: name to be printed
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	printf(f);
}
