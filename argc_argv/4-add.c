#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success) or 1 if there is an Error
 */

int main(int argc, char* argv[])
{
	int total, num, len, i;
	char* arg;

	if (argc < 2)
	{
		printf("0\n");

		return (0);
	}
	total = 0;

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		len = 0;

		while (arg[len])
		{
			if (!isdigit(arg[len]))
			{
				printf("Error\n");

				return (1);
			}
			len++;
		}
		num = atoi(arg);

		if (num < 0)
		{
			printf("Error\n");

			return (1);
		}
		total += num;
	}
	printf("%d\n", total);

	return (0);
}
