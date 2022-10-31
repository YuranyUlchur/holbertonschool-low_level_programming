#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - Entry point
 *@size: value type unsigned integer
 *@c: value tipe char
 *Return: type char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *puntero;

	puntero = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		puntero[i] = c;
	}

	if (size == 0)
	{
		return ('\0');
	}
	free(puntero);

	return (puntero);
}
