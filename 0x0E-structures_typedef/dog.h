#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure declaration, dog is name of the structure
 * @name: first member, type char pointer
 * @age: second membet, type float
 * @owner: third member, type char pointer
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef my_dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
