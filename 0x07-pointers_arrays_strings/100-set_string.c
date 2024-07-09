#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: Pointer to a pointer
 * @to: Pointer to a char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
