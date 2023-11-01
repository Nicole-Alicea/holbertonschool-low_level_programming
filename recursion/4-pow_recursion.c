#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y
 * @x: The value that will be raised to the power of y
 * @y: The power to which we will raise x
 *
 * Return: The value of x raised to the power of y or -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
