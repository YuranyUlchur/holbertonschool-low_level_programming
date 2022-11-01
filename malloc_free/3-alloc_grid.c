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
	int **p;
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
	p = malloc(height * sizeof(int *));
	if (p != '\0')
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(width * sizeof(int));
			if (p[i] == '\0')
			{
				for (; i >= 0; i--)
				{
					free(p[i]);
				}
				free(p);
				return ('\0');
			}
		}
		for (traverse = 0; traverse < height; traverse++)
		{
			for (traverse2 = 0; traverse2 < width; traverse2++)
			{
				p[traverse][traverse2] = 0;
			}
		}
		return (p);
	}
	return ('\0');
}
