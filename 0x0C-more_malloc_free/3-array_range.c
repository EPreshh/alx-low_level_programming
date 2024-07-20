#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: First value in array
 * @max: Last value in array
 *
 * Return: Pointer to the new array, NULL if malloc
 * fails or if min > max
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
