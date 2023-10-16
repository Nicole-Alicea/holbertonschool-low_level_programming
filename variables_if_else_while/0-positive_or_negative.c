#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*Main - Entry point
*
*Description: This program will assign a random number to the variable n each time it is executed.
*
* Return always 0 (Success)
*/ 

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d\n", n);

return (0);
}
