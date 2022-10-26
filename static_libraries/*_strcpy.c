#include "main.h"
/**
 *_strcpy - Function that copy the string
 *@src: value pointers
 *@dest: value pointers
 *Return: Return value pointers
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
