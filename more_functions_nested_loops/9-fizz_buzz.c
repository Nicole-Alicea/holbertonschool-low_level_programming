#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 && num % 5)
		{
			printf("FizzBuzz");
		}
		if (num % 3)
		{
			printf("Fizz");
		}
		if (num % 5)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
	}
	return (0);
}
