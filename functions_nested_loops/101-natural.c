#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum_of_multiples = 0;

	for (int num = 3; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum_of_multiples += num;
		}
	}
	printf("%d\n", sum_of_multiples);

	return (0);
}
