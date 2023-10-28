#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * leet - This function encodes a string into 1337
 *
 */

char *leet(char *str)
{
	char *encodedStr = (char *)malloc(strlen(str) + 1);
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	if (encodedStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];
		if ((c == 'a' || c == 'A') || (c == 'e' || c == 'E') || (c == 'o' || c == 'O') || (c == 't' || c == 'T') || (c == 'l' || c == 'L'))
		{
			encodedStr[i] = '4' * (c == 'a' || c == 'A') + '3' * (c == 'e' || c == 'E') + 'O' * (c == 'o' || c == 'O') + '7' * (c == 't' || c == 'T') + '1' * (c == 'l' || c == 'L');
		}
		else
		{
			encodedStr[i] = c;
		}
	}
	encodedStr[i] = '\0';
	return (encodedStr);
}
