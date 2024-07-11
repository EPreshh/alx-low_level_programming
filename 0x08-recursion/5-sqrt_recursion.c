#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Number whose square root is to be returned
 *
 * Return: square root of number or 0 or 1 if -ve or 1 & 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursive_helper(n, 0, n));
}

/**
 * _sqrt_recursive_helper - funtcion to help perform search for sqrt
 * @n: Number whose square root is to be found
 * @start: Starting index for the search
 * @end: Ending index for the search
 *
 * Return: square root of n
 */
int _sqrt_recursive_helper(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;
	if (mid * mid == n)
	{
		return (mid);
	}
	if (mid * mid < n)
	{
		return (_sqrt_recursive_helper(n, mid + 1, end));
	}
	else
	{
		return (_sqrt_recursive_helper(n, start, mid - 1));
	}
}
