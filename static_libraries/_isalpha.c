#include "main.h"
/**
 *_isalpha- Entry point
 * @c: is the character received
 *
 * Return: Returns 1 if c is lowercase Returns 0 otherwise
 */
	int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	if (c >= 'A' && c <= 'Z')
{
	return (1);
}
	return (0);
}
