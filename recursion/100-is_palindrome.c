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

int is_alphanumeric(char c)
{
	return (isalnum(c));
}

int is_equal(char a, char b)
{
	return (tolower(a) == tolower(b));
}

int is_palindrome_recursive(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (!is_alphanumeric(s[left]))
	{
		return (is_palindrome_recursive(s, left + 1, right));
	}
	if (!is_alphanumeric(s[right]))
	{
		return (is_palindrome_recursive(s, left, right - 1));
	}
	if (is_equal(s[left], s[right]))
	{
		return (is_palindrome_recursive(s, left + 1, right - 1));
	}
	return (0);
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
