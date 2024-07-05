#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: String to be changed
 *
 * Return: Changed string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
