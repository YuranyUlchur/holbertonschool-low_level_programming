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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (haystack[i] == needle[x])
			{
				break;
			}
		}
		x = 0;
		if (haystack[i] == needle[x])
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
