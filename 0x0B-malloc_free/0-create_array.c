#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates a char array & initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

