#include "main.h"
#include <stddef.h>

/**
 * reset_to_98 - This function will update the value of a pointer
 * @n: pointer that will be updating the value it points to
 *
 * Return: void
 */

void reset_to_98(int *n)
{
	if (n != NULL)
	{
		*n = 98;
	}
}
