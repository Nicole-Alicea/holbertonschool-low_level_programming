#include "main.h"

/**
 * is_prime_number - This function will tell us if an integer is a prime number
 * @n: input integer
 *
 * Return: 1 if the integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	int i;

	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number(n - 1));
}
