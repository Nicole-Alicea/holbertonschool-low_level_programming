#include "main.h"
#include <stdio.h>

/**
 * checker - Will check the input number from n to the base
 * @n: number that will be squared and compared against the base
 * @base: base number to check
 *
 * Return: natural square root of base number
 */

int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}

/**
 * _sqrt_recursion - This function returns the natural square root of a number
 * @n: Number to be used
 *
 * Return: natural square root or -1 if it doesn't have one
 */

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
