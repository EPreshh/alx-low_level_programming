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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */
