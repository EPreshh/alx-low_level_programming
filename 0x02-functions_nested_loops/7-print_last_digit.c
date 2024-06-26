#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: Digit to be checked
 *
 * Return: last_digit
 */
int print_last_digit(int x)
{
	int last_digit;

	if (x < 0)
	{
		last_digit = -1 * (x % 10);
	}
	else
	{
		last_digit = (x % 10);
	}
	_putchar(last_digit + '0');
	return (last_digit);

}
