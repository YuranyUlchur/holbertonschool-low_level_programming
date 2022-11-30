#include "main.h"
#include <stdio.h>
/**
 *_strlen - takes a string as an argument and returns its length
 *@s: value pointers
 *Return: Return value i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
