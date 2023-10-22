#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1, b = 2;

	printf("%d, %d, ", a, b);

	int count = 2;

	while (count < 98)
	{
		int temp = a + b;
		a = b;
		b = temp;

		printf("%d, ", b);

		count++;
	}
	printf("\n");

	return (0);
}
