#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: Argument sprcifying destination string
 * @src: Argument specifying source strinng
 * @n: Argument specifying number of bytes to be copied
 *
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
