#include "search.h"
#include <stdio.h>

/**
 * binary_search-  function Linear binary search
 *@array: value pointers
 *@size: value size
 *@value: value integer
 *Return: return interger
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, half = 0, higth = size - 1, i = 0;

	if (!array)
		return (-1);
	while (low <= higth)
	{
		half = (higth + low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= higth; i++)
		{
			if (i != low)
				printf(", ");
			printf("%i", array[i]);
		}
		printf("\n");
		if (array[half] == value)
			return (half);

		if (array[half] < value)
			low = half + 1;
		else
		higth = half - 1;
	}
	return (-1);
}
