#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long long a = 1, b = 2;
	int count = 2;
	unsigned long long temp;

	printf("%llu, %llu, ", a, b);

	while (count < 98)
	{
		temp = a + b;
		a = b;
		b = temp;

		printf("%llu, ", b);

		count++;
	}
	printf("\n");

	return (0);
}
