#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: name value pointers
 * @size: function value size
 * @action: function action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
