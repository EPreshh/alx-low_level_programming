#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Description: This function creates a new dog and stores copies of
 * the name and owner strings. It returns a pointer to the new dog_t
 * structure, or NULL if the function fails.
 *
 * Return: Pointer to the new dog_t structure, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cpy, *owner_cpy;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	name_cpy = malloc(strlen(name) + 1);

	if (name_cpy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(name_cpy, name);

	owner_cpy = malloc(strlen(owner) + 1);

	if (owner_cpy == NULL)
	{
		free(name_cpy);
		free(new_dog);
		return (NULL);
	}
	strcpy(owner_cpy, owner);

	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;

	return (new_dog);
}

