#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * leet - This function encodes a string into 1337
 *
 */

char *leet(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	char *encodedStr = (char *)malloc(strlen(str) + 1);
	if (encodedStr == NULL)
	{
		return (NULL);
	}

	strcpy(encodedStr, str);

	for (i = 0; encodedStr[i] != '\0'; i++)
	{
		char c = encodedStr[i];
		if ((c == 'a' || c == 'A'))
		{
			encodedStr[i] = '4';
		}
		else if (c == 'e' || c == 'E')
		{
			encodedStr[i] = '3';
		}
		else if (c == 'o' || c == 'O')
		{
			encodedStr[i] = 'O';
		}
		else if (c == 't' || c == 'T')
		{
			encodedStr[i] = '7';
		}
		else if (c == 'l' || c == 'L')
		{
			encodedStr[i] = '1';
		}
	}
	return (encodedStr);
}
