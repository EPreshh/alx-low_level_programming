#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, and a new line
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
		if (j > 9)
		{
			_putchar((j / 10) + '0');
		}
		_putchar((j % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
