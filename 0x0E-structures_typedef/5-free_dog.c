#include "dog.h"

/**
 * free_dog - a function that frees dog
 * @d: pointer to struct variable
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
