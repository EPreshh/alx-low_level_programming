#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase to stdout
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
