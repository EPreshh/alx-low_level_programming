#include "main.h"

/**
 * main - Entry point of program to print nargs
 * @argc: Parameter specifying number of arguments
 * @argv: Pointer to the arguments vector
 *
 * Return: Always (Success) 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
