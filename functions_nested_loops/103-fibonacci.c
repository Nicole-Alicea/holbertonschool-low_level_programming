#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long long limit = 4000000;
	long long a = 1, b = 2, next_term, sum = 0;

	while (b <= limit)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		next_term = a + b;
		a = b;
		b = next_term;
	}

	printf("Sum of even-valued Fibonacci terms not exceeding %lld: %lld\n", limit, sum);

	return (0);
}
