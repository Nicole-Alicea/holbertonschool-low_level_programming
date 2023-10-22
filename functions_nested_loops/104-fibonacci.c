#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned int a = 1, b = 2;
	int count = 2;
	unsigned int temp;

	printf("%u, %u, ", a, b);

	while (count < 98)
	{
		temp = a + b;
		a = b;
		b = temp;

		printf("%u, ", b);

		count++;
	}
	printf("\n");

	return (0);
}
