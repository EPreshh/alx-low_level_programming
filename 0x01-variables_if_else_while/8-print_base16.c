#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	for (a = 1; a <= 9; a++)
	{
		putchar(a + '0');
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	return (0);
}
