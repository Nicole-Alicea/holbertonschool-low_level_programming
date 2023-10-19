#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - prints the lowercase alphabet followed by a newline
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();

	return (0);
}
