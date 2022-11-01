#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid- Entry point
 *@width: value type integer
 *@height: value type integer
 *Return: type char
 */
int **alloc_grid(int width, int height)
{
	int **puntero;
	int i;
	int traverse;
	int traverse2;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	puntero = malloc(height * sizeof(int *));
	if (**puntero != '\0')
	{
		for (i = 0; i < height; i++)
		{
			puntero[i] = malloc(width * sizeof(int *));
			if (*puntero[i] == '\0')
			{
				for (; i >= 0; i--)
				{
					free(puntero[i]);
				}
				free(puntero);
				return ('\0');
			}
		}
		for (traverse = 0; traverse < height; traverse++)
		{
			for (traverse2 = 0; traverse2 < width; traverse2++)
			{
				puntero[traverse][traverse2] = 0;
			}
		}
		return (puntero);
	}
	return ('\0');
}
