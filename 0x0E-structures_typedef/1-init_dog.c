#include "dog.h"

/**
 * init_dog - initialises a variable of type struct dog
 * @d: Pointer to the struct dog to initalise
 * @name: Pointer to dog name to initalise
 * @age: Dog age to initialise
 * @owner: Pinter to dog owner to initialise
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
