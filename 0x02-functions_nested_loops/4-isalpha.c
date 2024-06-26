#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check for an alphabet and prints to stdout
 * @c: Character to be checked
 *
 * Return: 1 if character is an alphabet. 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) || islower(c) || isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
