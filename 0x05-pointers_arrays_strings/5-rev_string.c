#include "main.h"
#include <string.h>

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: Pointer to the string to print
 */
void rev_string(char *s)
{
	int len, i, tmp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
