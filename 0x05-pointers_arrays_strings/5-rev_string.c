#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: Pointer to the string to print
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
