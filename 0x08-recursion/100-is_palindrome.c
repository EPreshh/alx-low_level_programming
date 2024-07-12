#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string whose length to check
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _is_palindrome_recursive - Recursively checks if a string is a palindrome
 * @s: The string to check
 * @start: The start index
 * @end: The end index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int _is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	return (_is_palindrome_recursive(s, 0, len - 1));
}
