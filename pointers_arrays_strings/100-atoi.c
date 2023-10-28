#include "main.h"
#include <stdbool.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	bool foundDigit = false;

	while (*s)
	{
		if (*s == ' ')
		{
			s++;
			continue;
		}
		if (*s == '-')
		{
			sign = -1;
			s++;
		}
		else if (*s == '+')
		{
			s++;
		}
		while (*s >= '0' && *s <= '9')
		{
			foundDigit = true;
			int digit = *s - '0';

			if (result > (INT_MAX - digit) / 10)
			{
				return sign == 1 ? INT_MAX : INT_MIN;
			}
			result = result * 10 + digit;
			s++;
		}
		if (!foundDigit)
		{
			return (0);
		}
		return result * sign;
	}
	return (0);
}
