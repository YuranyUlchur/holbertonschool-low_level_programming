#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: value pointers
 *@src: value pointers
 *@n: value pointers
 *Return: Return value pointers dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}