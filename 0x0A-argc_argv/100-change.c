#include "main.h"

/**
 * main - program entry point
 * @argc: Number of arguments received
 * @argv: Pointer to argument vector
 *
 * Return: Always (Success) 0
 */
int main(int argc, char *argv[])
{	int i, cents, coins;
	int coin_values[] = {25, 10, 5, 2, 1};

	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");

		return (0);
	}
	for (i = 0; i < 5 && cents > 0; i++)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			coins++;
		}
	}
	printf("%d\n", coins);

	return (0);
}
