#include "main.h"

/**
 * binary_to_uint - Converts a binary number in a string to an unsigned int.
 * @b: Pointer to a string of '0' and '1' characters.
 *
 * Return: The converted number, or 0 if there is an invalid character
 * or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			num = num << 1;
			num += *b - '0';
		}
		else
		{
			return (0);
		}
		b++;
	}

	return (num);
}
