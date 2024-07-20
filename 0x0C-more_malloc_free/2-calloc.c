#include "main.h"

/**
 * _calloc - allocates for an array using malloc
 * @nmemb: Members of the array
 * @size: Size of the array
 *
 * Return: pointer to allocated memory or NULL if nmemb
 * or size is 0 and NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size, i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	char_ptr = (char *)ptr;

	for (i = 0; i < total_size; i++)
	{
		char_ptr[i] = 0;
	}

	return (ptr);
}
