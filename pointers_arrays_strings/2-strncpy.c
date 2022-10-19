#include "main.h"
#include <stddef.h>

/**
 *_strncpy -  chain concatenates
 *@dest: value pointers
 *@src: value pointers
 *@n: value
 *Return: Return value poiners dest
 */
char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	if (i < n)

	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
