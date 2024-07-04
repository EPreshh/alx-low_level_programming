#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: Argument specifying dstination string
 * @src: Argument specifying source string
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
