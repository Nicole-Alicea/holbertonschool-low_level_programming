#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m, p, q;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			for (p = 0; p <= 9; p++)
			{
				for (q = p + 1; q <= 9; q++)
				{
					putchar(n + '0');
					putchar(p + '0');
					putchar(' ');
					putchar(m + '0');
					putchar(q + '0');

					if (n != 6 || m != 7 || p != 8 || q != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
