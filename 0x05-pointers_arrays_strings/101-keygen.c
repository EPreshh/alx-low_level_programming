#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PSSWD_LENGTH 10

/**
 * generate_random_char - generates a random character
 *
 * Return: a random character from fixed array
 */
char generate_random_char(void)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	return (charset[rand() % (sizeof(charset) - 1)]);
}
/**
 * generate_random_password - generates a random password
 * @password: A provided array
 * @len: Specified password array length
 */
void generate_random_password(char *password, int len)
{
	for (int i = 0; i < len; i++)
	{
		password[i] = generate_random_char();
	}
	password[len] = '\0';
}
/**
 * main - Entry point
 *
 * Return: Always (Success) 0
 */
int main(void)
{
	char password[PSSWD_LENGTH + 1];

	srand(time(NULL));
	generate_random_password(password, PSSWD_LENGTH);
	printf("Your password is: %s\n", password);
	return (0);
}

