#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 1 or 2 on failure.
 */
int main(int argc, char *argv[])
{
	int n_bytes, i;
	char *ptr_main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	ptr_main = (char *)main;

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x", ptr_main[i] & 0xff);
		if (i != n_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}

