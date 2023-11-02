#include "main.h"
#include <stdio.h>

/**
 * is_prime_recursive - This function uses recursion to verify
 * if an integer is a prime number
 * @i: The current divisor
 * @n: input integer
 *
 * Return: 1 if the integer is a prime number, otherwise 0
 */

int is_prime_recursive(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, i - 1));
}

/**
 * is_prime_number - This function will tell us if an integer is a prime number
 * @n: input integer
 *
 * Return: 1 if the integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
