#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check for a digit and prints to stdout
 * @c: Character to be checked
 *
 * Return: 1 if character is an alphabet. 0 otherwise
 */
int _isdigit(int c)
{
	if isdigit(c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

