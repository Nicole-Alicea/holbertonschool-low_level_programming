#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * is_plaindrome_recursive - Checks if given string is a palindrome
 * @s: string to be checked
 * @left: left portion of the string to be checked
 * @right: right portion of the string to be checked
 *
 * Return: 1 if the string is a palindrome
 */

int is_palindrome_recursive(char *s, int left, int right)
{
	while (left < right)
	{
		if (!isalnum(s[left]))
		{
			left++;
		}
		else if (!isalnum(s[right]))
		{
			right--;
		}
		else if (tolower(s[left]) != tolower(s[right]))
		{
			return (0);
		}
		else
		{
			left++;
			right--;
		}
	}
	return (1);
}

/**
 * is_palindrome - This function will check wether a string is a palindrome or not
 * @s: string to be checked
 *
 * Return: 1 if string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int length;

	if (s == NULL)
	{
		return (0);
	}
	length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
