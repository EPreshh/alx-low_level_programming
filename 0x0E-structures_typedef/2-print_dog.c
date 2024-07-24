#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog to be printed
 *
 * Description: This function prints the members of a struct dog.
 * If an element is NULL, it prints (nil).
 * If the struct dog pointer is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	printf("Age: %.1f\n", d->age);
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}

