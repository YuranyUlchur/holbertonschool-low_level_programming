#include "main.h"
/**
 *_strcat -  function appends the each the string dest
 *@dest: value pointers
 *@src: value pointers
 *Return: Return value poiners dest
 */
char *_strcat(char *dest, char *src)
{

	int i;
	int o = 0;

	for (i = 0; dest[i] != '\0'; i++)

	{
	}
	for (o = 0; src[o] != '\0'; o++)
	{
		dest[i + o] = src[o];
	}
	dest[i + o] = '\0';

	return (dest);
}
