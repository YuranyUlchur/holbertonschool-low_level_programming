#include "main.h"

/**
 *_strncat -  chain concatenates
 *@dest: value pointers
 *@src: value pointers
 *@n: value
 *Return: Return value poiners dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int i;
	int o = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}

		for (o = 0; src[o] != '\0'; o++)
		{
			if (o < n)
			{

				dest[i + o] = src[o];
			}
			o++;
		}
		dest[i + o] = '\0';
		return (dest);
}
