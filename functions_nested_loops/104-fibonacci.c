#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1, b = 2;
	int count = 2;
	int temp;

	printf("%d, %d, ", a, b);

	while (count < 98)
	{
		temp = a + b;
		a = b;
		b = temp;

		printf("%d, ", b);

		count++;
	}
	printf("\n");

	return (0);
}
