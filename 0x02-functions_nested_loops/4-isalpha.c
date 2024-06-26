#include <ctype.h>
#include "main.h"

/**
 * _isaplha - checks for aplhabetic character and prints a result to the stdout
 * @c: - the character to check
 *
 * Return: on being a letter, lowecase or uppercase,  1
 * if otherwise 0
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
