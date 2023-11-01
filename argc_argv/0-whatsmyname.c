#include <stdio.h>

/**
 * main - entry point
 * @argv: name of the program
 * @argc: array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("Unable to determine program name\n");
	}
	return (0);
}
