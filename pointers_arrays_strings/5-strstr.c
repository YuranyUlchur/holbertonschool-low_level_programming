#include "main.h"
#include <stdio.h>
/**
 *_strstr -  locates a substring
 *@haystack: value pointers
 *@needle: value pointers
 *Return: Return value pointers
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int x;
	int aux;
	int aux1;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		aux = i;
		for (x = 0; needle[x] != '\0'; x++, aux++)
		{
			if (haystack[aux] != needle[x])
			{
				aux1 = 0;

				break;
			}
			else
			{
				aux1++;
			}
		}
		if (aux1 != 0)
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
