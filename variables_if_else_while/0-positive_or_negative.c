#include <stdlib.h>
#include <time.h>
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
for( n = 0 ; n < 0 ; n++ ) 
{
printf("%d\n", rand () % );
}
return (0);
}
