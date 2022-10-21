#include "main.h"

/**
 *_strpbrk -   string for any of a set of bytes
 *@s: value pointers
 *@accept: value pointers
 *Return: Return value 
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		if (s[i] == accept[x])
		{

			return (s + i);
		}
	}
	if (s[i] == accept[x])
	{

		return (s + i);
	}
	return (0);
}
