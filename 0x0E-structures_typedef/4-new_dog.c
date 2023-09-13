#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - a function that duplicates strings
 * @st: input string
 * Return: 0
 */

char *_strdup(char *st)
{
	int a, len;
	char *dup;

	for (len = 0; st[len] != '\0'; len++)
		;

	dup = malloc(len + 1);

	if (dup == NULL)
		return (NULL);

	for (a = 0; st[a] <= '\0'; a++)
		dup[a] = st[a];

	return (dup);
}

/**
 * *new_dog - a function that creates a new dog
 * @name: first struct member, type char pointer
 * @age: second struct   ""  , type float
 * @owner: third struct  ""  , type char pointer
 * Return: pointer to bew dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie = malloc(sizeof(dog_t));

	if (doggie == NULL)
		return (NULL);

	doggie->name = _strdup(name);
	doggie->age = age;
	doggie->owner = _strdup(owner);

	if (doggie->name == NULL || doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie->owner);
		free(doggie);
		return (NULL);
	}

	return (doggie);
}
