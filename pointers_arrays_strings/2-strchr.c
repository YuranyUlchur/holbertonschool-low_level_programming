#include "main.h"
/**
 *_strchr - copies memory area
 *@s: value pointers
 *@c: value
 *Return: Return value pointers dest
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{

			return (s + i);
		}
	}

	return (0);
}
