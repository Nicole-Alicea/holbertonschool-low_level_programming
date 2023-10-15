#include <unistd.h>

/**
 * main -Entry point
 *
 * Description: 'This program will be using write to print a sentence'
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, sizeof(message) - 1);

	return (1);
}
