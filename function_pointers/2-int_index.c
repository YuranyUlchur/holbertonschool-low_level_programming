#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: name value pointers
 * @size: function value size
 * @cmp: function action
 * Return: Return array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL || cmp != NULL)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (cmp(array[i]) != 0)
			return (i);
		}
	}
	return (-1);
}
