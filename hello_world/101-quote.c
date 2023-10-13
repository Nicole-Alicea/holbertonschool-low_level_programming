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
	char message[] = "and that piece of art is useful\" - Dora Korpar,\
			  2015-10-19\n";
	size_t message_len = sizeof(message) - 1;

	write(1, message, message_len);

	return (1);
}
