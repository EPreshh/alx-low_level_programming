#include "main.h"

/**
 * main - Entry point of program to print all args received
 * @argc: Parameter specifying number of arguments
 * @argv: Pointer to the arguments vector
 *
 * Return: Always (Success) 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

