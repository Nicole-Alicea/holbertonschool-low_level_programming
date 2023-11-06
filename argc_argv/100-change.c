#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - calculates the minimum number of coins needed
 * @cents: amount of cents you need to give back
 *
 * Return: number of coins needed
 */

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success) or 1 for Error
 */

int minCoins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		numCoins += cents / coins[i];
		cents %= coins[i];
	}
	return (numCoins);
}

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		int result = minCoins(cents);

		printf("%d\n", result);
	}
	return (0);
}
