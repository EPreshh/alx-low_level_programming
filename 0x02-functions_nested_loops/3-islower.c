#include <ctype.h>
#include "main.h"

/**
 * _islower - checks the case of a character and prints a result to the stdout
 * @c: - the character to check
 *
 * Return: On being a lowecase 1
 * if otherwise 0
 */
int _islower(int c)
{
	if islower(c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
