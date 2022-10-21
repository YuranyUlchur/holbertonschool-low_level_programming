#include "main.h"
/**
 *_memset - copies n characters
 *@s: value pointers
 *@b: value pointers
 *@n: value pointers
 *Return: Returns a pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
