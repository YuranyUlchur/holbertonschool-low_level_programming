#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print number
 *@n: value the number
 *
 *Return: Always 0.
 */
void print_to_98(int n)
{
	int x;

	for (x = n; x <= 98; x++)

	{
		printf("%d", x);
		if (x < 98)
		{
			printf(",");
			printf(" ");
		}
	}

	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x > 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	printf("\n");
}
