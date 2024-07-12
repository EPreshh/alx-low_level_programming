#include "main.h"

/**
 * _is_prime_recursive - checks if a number is prime
 * @n: The number to be checked
 * @i: The current divisor being tested
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int _is_prime_recursive(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	return (_is_prime_recursive(n, 2));
}
