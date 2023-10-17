#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		char letter = 'a' + i;

		if (letter != 'q' && letter != 'e')
				{
				putchar(letter);
				}
				}
				putchar('\n');

				return (0);
				}
