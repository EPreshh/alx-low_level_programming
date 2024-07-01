#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: Pointer to the string to print
 */
void puts_half(char *str)
{
	int len, i, first;

	len = strlen(str);

	if (len % 2 == 0)
	{
		first = len / 2;
	}
	else
	{
        	first = (len - 1) / 2 + 1;
	}
	for (i = first; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

