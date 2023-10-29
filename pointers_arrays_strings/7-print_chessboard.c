#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - This function prints the chessboard
 * @a: pointer
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			printf("%c", a[row][col]);
		}
		printf("\n");
	}
}
