#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes, of the new memory block.
 *
 * Return: Pointer to the newly allocated memory block, or NULL if failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_ptr;

	if (new_size == 0)
	{
		if (ptr != NULL)
		{
			free(ptr);
		}
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr_ptr = malloc(new_size);
		if (ptr_ptr == NULL)
		{
			return (NULL);
		}
		return (ptr_ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	ptr_ptr = malloc(new_size);

	if (ptr_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		memcpy(ptr_ptr, ptr, old_size);
	}
	else
	{
		memcpy(ptr_ptr, ptr, new_size);
	}
	free(ptr);

	return (ptr_ptr);
}

