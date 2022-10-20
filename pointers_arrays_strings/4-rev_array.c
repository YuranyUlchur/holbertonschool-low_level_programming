#include "main.h"
#include <stdio.h>

/**
 *reverse_array -   compares two strings
 *@a: value pointers
 *@n: value pointers
 *Return: Return value poiners dest
 */

void reverse_array(int *a, int n)

{
	int i;
	int aux = 0;

	n--;

	for (i = 0; i < n; i++)
	{
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
		n--;
	}
}
