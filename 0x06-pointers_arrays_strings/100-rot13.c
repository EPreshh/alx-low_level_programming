#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: String to be encoded
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	char c;
	char *ptr = str;
	char lookup[256] = {0};

	for (c = 'a'; c <= 'z'; c++)
	{
		lookup[(unsigned char)c] = ((c - 'a' + 13) % 26) + 'a';
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		lookup[(unsigned char)c] = ((c - 'A' + 13) % 26) + 'A';
	}
	while (*ptr != '\0')
	{
		if (lookup[(unsigned char)*ptr])
	{
		*ptr = lookup[(unsigned char)*ptr];
	}
	ptr++;
	}

	return (str);
}
