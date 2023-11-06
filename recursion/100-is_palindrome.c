#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * is_alphanumeric - checks if a character is an alphanumeric character
 * @c: character to be checked
 *
 * Return: 1 if it's an alphanumeric character or 0 otherwise
 */

int is_alphanumeric(char c)
{
	return (isalnum(c));
}

/**
 * is_equal - checks if two characters are equal
 * @a: character to be compared
 * @b: character to be compared
 *
 * Return: 1 if equal or 0 if they are not
 */

int is_equal(char a, char b)
{
	return (tolower(a) == tolower(b));
}

/**
 * is_palindrome_recursive - recursive helper function that checks
 * if the string is a palindrome
 * @s: string to be checked
 * @right: right portion of string
 * @left: left portion of string
 *
 * Return: 0
 */

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
 * is_palindrome - Checks wether a string is a palindrome
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
