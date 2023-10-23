#include <stdio.h>
#include <gmp.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	mpz_t a, b, temp;
	mpz_inits(a, b, temp, NULL);

	mpz_set_ui(a, 1);
	mpz_set_ui(b, 2);

	int count = 2;

	gmp_printf("%Zd, %Zd, ", a, b);

	while (count < 98)
	{
		mpz_add(temp, a, b);
		mpz_set(a, b);
		mpz_set(b, temp);
		gmp_printf("%Zd, ", b);
		count++;
	}

	gmp_printf("\n");
	
	mpz_clears(a, b, temp, NULL);

	return (0);
}
