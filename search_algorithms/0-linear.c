#include "search.h"
#include <stdio.h>
/**
 * linear_search-  function Linear search algorithm
 *@array: value pointers
 *@size: value size
 *@value: value integer
 *Return: return interger
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || !value)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
