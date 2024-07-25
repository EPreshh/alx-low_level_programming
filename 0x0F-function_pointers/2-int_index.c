#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * via a comparison function.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function to be utilised
 * to compare values.
 *
 * Return: The index of the first element for which the
 * cmp function does not return 0.
 * If no element matches or if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
