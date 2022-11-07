#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - Entry point
 *@name: value pointer name
 *@age: value type float  age
 *@owner: value pointer name
 */

struct dog

{
	char *name;

	float age;

	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
