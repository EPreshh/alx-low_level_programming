#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First argument - Pointer to first integer
 * @b: Second argument - Pointer to second integer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
