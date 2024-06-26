#include "main.h"

/**
 * print_sign - checks the sign of a number and prints to stdout
 * @n: The number to be checked
 *
 * Return: 1 if n is greater than 0, 0 if equal to 0 and -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
