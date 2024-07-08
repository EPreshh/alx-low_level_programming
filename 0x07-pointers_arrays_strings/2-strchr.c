#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String to be received as input
 * @c: character to be searched
 *
 * Return: matched character or NULL otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
