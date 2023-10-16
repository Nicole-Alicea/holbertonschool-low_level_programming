#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description: 'this program will generate random numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d\n", n);

if (n > 0)
{
	printf("%d is positive\n");
}
else if (n < 0)
{
	printf("%d is negative\n");
}
else
{
	printf("%d is zero\n");
}
return (0);
}
