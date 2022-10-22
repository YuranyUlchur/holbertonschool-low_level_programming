#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - function a string
 *@a: variable pointer
 *@size: variable pointer
 *Return: variable pointer
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s = 0;
	int b = 0;

	for (i = 0; i < size; i++)
		s += a[i * (size + 1)];
	printf("%d, ", s);

	i = size - 1;

	while (i < (size * size) - (size - 1))
	{
		b += a[i];
		i += (size - 1);
	}
	printf("%d\n", b);
}
