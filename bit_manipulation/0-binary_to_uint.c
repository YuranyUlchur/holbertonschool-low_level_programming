#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -  function that converts a binary number
 * @b: pointer const lis_t
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int converted = 0;

	if (!b)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		converted <<= 1;
		converted += (b[i] - '0');
		i++;
	}
	if (b[i] == '\0')
		return (converted);

	return (value);
}
