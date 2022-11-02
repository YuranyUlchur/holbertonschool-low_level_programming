#include "main.h"

/**
 **str_concat- function concatenates strings
 *@s1: value pointers
 *@s2: value pinters
 *Return: Return pointers
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
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
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	a = malloc((len1 + len2 + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		a[i] = s2[j];
		i++;
	}
	a[i] = '\0';
	return (a);
}
