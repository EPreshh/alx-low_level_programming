#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int m;

	va_start(args, n);

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && m < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
