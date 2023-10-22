#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long limit = 4000000;
	long a = 1, b = 2, next_term, sum = 0;

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

	printf("%ld\n", sum);

	return (0);
}
