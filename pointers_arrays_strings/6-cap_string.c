#include "main.h"
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

/**
 * cap_string - This function capitalizes all words of a string
 *
 * Return: input
 */

bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i]; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}

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
