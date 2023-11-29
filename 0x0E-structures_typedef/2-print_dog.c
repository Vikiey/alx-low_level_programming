#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to structure variable
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return; /* returns nothing */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	/* float value can't be null */
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
