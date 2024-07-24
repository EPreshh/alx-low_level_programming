#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * struct dog - a new type called dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: pointer to the owner of the dog
 *
 * Description: defines a new type calle dog with its
 * name, age ams owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* MAIN_H */
