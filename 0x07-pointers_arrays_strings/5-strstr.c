#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: String to be searched
 * @needle: Substring to be located
 *
 * Return: Pointer to found substring beginning or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (!*needle)
	{
		return (haystack);
	}
	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return haystack;
		}
		haystack++;
	}

	return (NULL);
}
