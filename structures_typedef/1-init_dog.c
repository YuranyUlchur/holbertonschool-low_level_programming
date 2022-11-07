#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *@d: value pointer dog
 *@name: value pointer name
 *@age: value type float  age
 *@owner: value pointer name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)
	{
		d->name = name;

		d->age = age;

		d->owner = owner;
	}
}
