#include "dog.h"

/**
 * init_dog - a funct that initialize a var of type struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * @d: pointer to struct variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
