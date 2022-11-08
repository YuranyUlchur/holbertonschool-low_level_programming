#include "dog.h"

/**
 * free_dog - function frees dogs
 *@d: value pointer name
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d)
		free(d->name)
		free(d->owner)
	}
	
	
}