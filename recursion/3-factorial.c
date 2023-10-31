#include "main.h"

/**
 * factorial - This function returns the factorial of a given number
 * @n: number to be used
 *
 * Return: The factorial of a number or -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
