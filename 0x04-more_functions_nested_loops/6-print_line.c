#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: First argument specifying number of lines to be drawn
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
