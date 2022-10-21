#include "main.h"

/**
 *_strspn -  length of a prefix substring
 *@s: value pointers
 *@accept: value pointers
 *Return: Return value poiners
 */
unsigned int _strspn(char *s, char *accept)
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
		if (accept[x] == '\0')
		{
			break;
		}
	}

	return (i);
}
