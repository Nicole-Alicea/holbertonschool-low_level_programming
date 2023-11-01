#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - This function will tell us if an integer is a prime number
 * @n: input integer
 *
 * Return: 1 if the integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	return (helper_prime(n, 2, n / 2));
}

/**
 * helper_prime - blank
 * @n: check1
 * @i: will be used to increment
 * @limit: will be used to stop
 *
 * Return: 0
 */

int helper_prime(int n, int i, int limit)
{
	if ((n % i == 0 && i <= limit) || n < 0 || n == 1)
	{
		return (0);
	}
	else if (n % i != 0 && i <= limit)
	{
		return (helper_prime(n, i + 1, limit));
	}
	else
	{
		return (1);
	}
}
