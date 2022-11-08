#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - function create new dog
 *@name: value pointer name
 *@age: value type float  age
 *@owner: value pointer name
 *Return: Return value newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int lenowner, lenname, i, o;
	dog_t *newdog;

		newdog = malloc(sizeof(dog_t));
		if (newdog == NULL)
		{
			return (NULL);
		}
		lenname = strlen(name);
		lenowner = strlen(owner);

		newdog->name = malloc(lenname + 1);
		newdog->owner = malloc(lenowner + 1);
		if (newdog->name == NULL || newdog->owner == NULL)
		{
			free(newdog);
			free(newdog->name);
			free(newdog->owner);
			return (NULL);
		}
		for (i = 0; i < lenname + 1; i++)
		{
			newdog->name[i] = name[i];
		}
		newdog->age = age;

		for (o = 0; o < lenowner + 1; o++)
		{
			newdog->owner[o] = owner[o];
		}
		return (newdog);
}
