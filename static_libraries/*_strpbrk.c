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

	for (i = 0; s[i]; i++)
	{
		for (x = 0; accept[x]; x++)
		{
			if (s[i] == accept[x])
			{
				break;
			}
		}
		if (s[i] == accept[x])
		{
			return (s + i);
		}
	}
	return ('\0');
}
