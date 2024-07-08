#include "main.h"

/**
 * _memcpy - ccopies memory area
 * @dest: Pointer to destination memory
 * @src: Pointer to source memory
 * @n: No of bytes to be copied
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
