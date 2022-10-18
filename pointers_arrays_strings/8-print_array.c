#include "main.h"
#include <stdio.h>
/**
 *print_array - function a string
 *@a: varible punter
 *@n: varible punter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (i < n - 1)
		printf("%d, ", a[i]);
	else
		printf("%d\n", a[i]);
	}
	if (n <= 4)
		printf("\n");
}