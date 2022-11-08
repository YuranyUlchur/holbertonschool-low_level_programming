#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees dogs
 *@d: value pointer name
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	
		free(d->name);
		free(d->owner);
		free(d);
	}
}
