#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: Integer to be supplied as input
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (!(i == 98))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (!(n == 98))
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
	}
	putchar('\n');
}
