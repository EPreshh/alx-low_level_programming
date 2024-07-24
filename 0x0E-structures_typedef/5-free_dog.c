#include "dog.h"

/**
 * free_dog - frees memory allocation for a dog_t structure
 * @d: pointer to the dog_t structure to free
 *
 * Description: This function frees the memory allocation for the
 * name and owner strings, as well as the dog_t structure itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
