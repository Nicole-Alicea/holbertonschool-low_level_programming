#include "main.h"
#include <stdbool.h>
#include <ctype.h>

/**
 * cap_string - This function capitalizes all words of a string
 *
 * Return: input
 */

char *cap_string(char *input)
{
	bool capitalize = true;
	int length = strlen(input);
	int i;

	for (i = 0; i < length; i++)
	{
		if (is_separator(input[i]))
		{
			capitalize = true;
		}
		else if (capitalize && isalpha(input[i]))
		{
			input[i] = toupper(input[i]);
			capitalize = false;
		}
		else
		{
			input[i] = tolower(input[i]);
		}
	}
	return (input);
}
