#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to the string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int found_number = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			found_number = 1;
			result = result * 10 + (*s - '0');
		}
		else if (found_number)
		{
			break;
		}
		s++;
	}

	return (result * sign);
}
