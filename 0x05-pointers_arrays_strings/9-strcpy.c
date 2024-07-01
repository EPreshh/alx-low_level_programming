#include "main.h"
#include <string.h>

/**
 * _strcpy - copies string pointed to by src to dest buffer
 * @dest: First argument pointer
 * @src: Secomd argument pointer
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return dest;
}
