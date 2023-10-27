#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = 5;

	printf("Array elements: ");
	print_array(arr, n);

	return (0);
}
