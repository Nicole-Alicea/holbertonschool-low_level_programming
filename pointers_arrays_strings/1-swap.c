#include "main.h"

/**
 * swap_int - This function will swap the values of two integers
 * @a: Integer to be swapped
 * @b: Integer to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = a;
	a = b;
	b = temp;
}
