#include "dog.h"

/**
 * *new_dog - a function that creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x, y, len1, len2;

	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	for (len1 = 0; name[len1] != '\0'; len1++)
		;
	for (len2 = 0; owner[len2] != '\0'; len2++)
		;

	new->name = malloc(len1 + 1);
	new->age = age;
	new->owner = malloc(len2 + 1);

	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}

	for (x = 0; x <= len1; x++)
		new->name[x] = name[x];
	for (y = 0; y <= len2; y++)
		new->owner[y] = owner[y];

	return (new);
}
