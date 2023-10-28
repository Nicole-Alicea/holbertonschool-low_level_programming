#include "main.h"
#include <stdbool.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: pointer
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* 1 represents positive, -1 represents negative */

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (result != 0)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
