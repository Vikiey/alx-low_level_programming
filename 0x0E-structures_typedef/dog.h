#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure declaration, dog is structure name
 * @name: first member, type char pointer(string)
 * @age: second member, type float
 * @owner: third member, type char pointer
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
