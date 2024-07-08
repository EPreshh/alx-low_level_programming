#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: Pointer to string to be searched
 * @accept: Pointer to string specifying bytes to be searched
 *
 * Return: Pointer to the byte in s or NULL is none found
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
