#include "main.h"
#include <stdio.h>
/**
 *cap_string- function is used capitalizes all words of a string
 *@a: value pointers
 *Return: Return value pointers
 */
char *cap_string(char *a)

{
	int i;

	if (a[0] >= 97 && a[0] <= 122)
	{
		a[0] = -32;
	}
	for (i = 1; a[i] != '\0'; i++)
	{
		if (a[i - 1] == 32)
		{
			if (a[i] >= 97 && a[i] <= 122)
			{
				a[i] = -32;
			}
		}
	}
}
