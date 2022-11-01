#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked -  function allocates memory using malloc
 *@b: value pointers
 *Return: type void
 */
void *malloc_checked(unsigned int b)
{
	int *puntero;

	puntero = malloc(b);

	if (puntero == NULL)
	{
		exit(98);
	}
	return (puntero);
}
