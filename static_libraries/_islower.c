#include "main.h"
/**
 *_islower- Entry point
 * @c: is the character received
 *
 * Return: Returns 1 if c is lowercase Returns 0 otherwise
 */
	int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	return (0);
}