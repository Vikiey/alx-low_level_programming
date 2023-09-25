#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - a function that creates a new dog
 * @name: first struct member, type char pointer
 * @age: second struct   ""  , type float
 * @owner: third struct  ""  , type char pointer
 * Return: pointer to bew dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, l_name, l_owner;

	dog_t *doggie = malloc(sizeof(dog_t));

	for (l_name = 0; name[l_name] != '\0'; l_name++)
		;
	for (l_owner = 0; owner[l_owner] != '\0'; l_owner++)
		;

	if (doggie == NULL)
	{
		return (NULL);
	}

	doggie->name = malloc(l_name + 1);
	if (doggie->name == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	for (a = 0; a <= l_name; a++)
		doggie->name[a] = name[a];

	doggie->age = age;

	doggie->owner = malloc(l_owner + 1);
	if (doggie->owner == NULL)
	{
		free(doggie->owner);
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	for (a = 0; a <= l_owner; a++)
		doggie->owner[a] = owner[a];

	return (doggie);
}
