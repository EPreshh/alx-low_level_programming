#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}

/**
 * op_mod - does remainder division of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}

