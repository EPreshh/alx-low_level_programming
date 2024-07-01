#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: Pointer to the string to print
 */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = len - 1; i >= 0;  i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

