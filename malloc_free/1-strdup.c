#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - Entry point
 *@str: value type unsigned integer
 *Return: type char
 */
char *_strdup(char *str)
{
	int i;
	int pi;
	char *puntero;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	puntero = malloc((i + 1) * sizeof(char));

	if (puntero == NULL)
	{
		return (NULL);
	}

	for (pi = 0; str[pi] != '\0'; pi++)
	{
		puntero[pi] = str[pi];
	}

	puntero[pi] = '\0';

	return (puntero);
}
