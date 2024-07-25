#include "function_pointers.h"

/**
 * print_name - prints a name using the function passed
 * to it as an argument.
 * @name: The name to be printed.
 * @f: Function pointer to a function that takes a char* and prints it.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
