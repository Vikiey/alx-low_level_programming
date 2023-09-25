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

	for (len = 0; st[len] != '\0'; len++)i /* length of string */
		;

	dup = malloc(len + 1); /* where + 1 is null terminator */

	if (dup == NULL)
		return (NULL);

	for (a = 0; st[a] <= '\0'; a++)
		dup[a] = st[a]; /* duplicates string */

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

	if (doggie->name == NULL)
		return (NULL);
	else
		doggie->name = _strdup(name);
	doggie->age = age;
	if (doggie->owner == NULL)
		return (NULL);
	else
		doggie->owner = _strdup(owner);

	free(doggie->name);
	free(doggie->owner);
	free(doggie);

	return (doggie);
}
