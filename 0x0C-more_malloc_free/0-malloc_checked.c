#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: Integer size of memory to be allocated
 *
 * Return: Pointer to the allocated memory or 98 if failure
 */
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}
	return (array);
}
