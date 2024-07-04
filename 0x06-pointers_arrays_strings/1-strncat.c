#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: Argument specifying destination string
 * @src: Argument specifying source string
 * @n: Argument specifying no of bytes to be used
 *
 * Return: Pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr != '\0')
	{
		ptr++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*ptr = src[i];
		ptr++;
	}
	ptr = '\0';

	return (dest);
}

