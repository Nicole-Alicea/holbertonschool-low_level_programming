#include "main.h"

/**
 * _sqrt_recursion - This function returns the natural square root of a number
 * @n: Number to be used
 *
 * Return: natural square root or -1 if it doesn't have one
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		_sqrt_recursion(n - 1);
		return (_sqrt_recursion(n - 1));
	}
}
