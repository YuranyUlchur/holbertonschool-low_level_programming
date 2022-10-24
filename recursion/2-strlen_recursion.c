#include "main.h"

/**
 *_strlen_recursion - function the length of a string
 *@s: value pointers
 *Return: Return value pointers
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	return (*s);
}
