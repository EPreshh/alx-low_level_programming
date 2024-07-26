#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: Frist parameter preceeding variadic list of args
 *
 * Return: 0 if n == 0, otherwise the sum of all params
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int m;
	int sum;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;

	va_start(args, n);

	for (m = 0; m < n; m++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
