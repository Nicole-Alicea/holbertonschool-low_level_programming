#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char digit = i + '0';
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
