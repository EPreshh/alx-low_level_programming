#include "main.h"

/**
 * string_nconcat - concatenates two sstrings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of string e to be concatenated
 *
 * Return: pointer to concatenated string, null if failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	nconcat = malloc(len1 + n + 1);

	if (nconcat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		nconcat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		nconcat[len1 + j] = s2[j];
	}
	nconcat[len1 + j] = '\0';

	return (nconcat);
}
