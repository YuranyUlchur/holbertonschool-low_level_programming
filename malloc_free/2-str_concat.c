#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 **str_concat- function malloc and free
 *@s1: variable malloc
 *@s2: variable malloc
 *Return: zero
 */
char *str_concat(char *s1, char *s2)
{
	int c;
	int n;
	int i;
	int j;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (c = 0; s1[c] != '\0'; c++)
	{
	}
	for (n = 0; s2[n] != '\0'; n++)
	{
	}
	a = malloc((c + n + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		a[i] = s2[j];
		i++;
	}
	a[i] = '\0';
	return (a);
}
