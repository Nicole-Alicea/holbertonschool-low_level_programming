#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char operator = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");

		return (98);
	}

	if (operator == '+')
	{
		printf("%d\n", num1 + num2);
	}
	else if (operator == '-')
	{
		printf("%d\n", num1 - num2);
	}
	else if (operator == '*')
	{
		printf("%d\n", num1 * num2);
	}
	else if (operator == '/')
	{
		if (num2 != 0)
		{
			printf("%d\n", num1 / num2);
		}
		else
		{
			printf("Error\n");

			return (100);
		}
	}
	else if (operator == '%')
	{
		if (num2 != 0)
		{
			printf("%d\n", num1 % num2);
		}
		else
		{
			printf("Error\n");

			return (100);
		}
	}
	else
	{
		printf("Error\n");

		return (99);
	}

	return (0);
}
