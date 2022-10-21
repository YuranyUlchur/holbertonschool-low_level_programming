#include "main.h"
#include <stdio.h>
/**
 *_strstr - function is used to convert lowercase to uppercase
 *@haystack: value pointers
 *@needle: value pointers
 *Return: Return value pointers
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int x;
	int aux;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		aux = i;
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (haystack[aux] == needle[x])
			{
			}
			aux++;
		}
		x = 0;
		if (haystack[aux] == needle[x])
		{
			return (haystack + (aux - 1));
		}
	}
	return (0);
}
