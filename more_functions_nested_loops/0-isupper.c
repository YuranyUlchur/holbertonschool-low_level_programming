#include "main.h"
#include <stdio.h>
/**
 *_isupperr- Returns a copy of this string converted to uppercase
 *@c: is the character received
 *Return: Returns 1 if c is lowercase Returns 0 otherwise
 */

int _isupper(int c)

{
{
	if (c >= 'a' && c <= 'z')
{
	return (0);
}
	if (c >= 'A' && c <= 'Z')
{
	return (1);
}
	return (0);
}
}
