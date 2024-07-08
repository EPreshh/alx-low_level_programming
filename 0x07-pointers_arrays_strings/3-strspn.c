#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: Pointer to string
 * @accept: Pointer to the bytes
 *
 * Return: number of bytes in the inital segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				break;
			}
		}
		if (!*a)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}

