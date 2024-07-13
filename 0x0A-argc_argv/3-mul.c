#include "main.h"

/**
 * main - Entry point of program that multiplies 2 numbers
 * @argc: Parameter specifying number of arguments
 * @argv: Pointer to the arguments vector
 *
 * Return: Always (Success) 0, or -1 if otherwise
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc < 3)
	{
		printf("Error\n");

		return (-1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		product = num1 * num2;
		printf("%d\n", product);
	}

	return (0);
}

