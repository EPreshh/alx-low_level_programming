#include "main.h"

/**
 * is_digit - checks that a string is digit
 * @str: Pointer to a string
 *
 * Return: Always (Success) 0
 */
int is_digit(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}

	return (1);
}

/**
 * main - Program entry point
 * @argc: number of arguments  received
 * @argv: pointer to arguments vector
 *
 * Return: Always (Success) 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			printf("Error\n");

			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
