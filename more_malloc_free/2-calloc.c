#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 **_calloc- function malloc and free
 *@nmemb: variable malloc
 *@size: variable malloc
 *Return: zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * nmemb);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size * nmemb; i++)
	{
		a[i] = 0;
	}

	return (a);

}
