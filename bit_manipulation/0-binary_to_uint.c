#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number
 * @b: pointer const lis_t
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	int binary_max = 0, result = 1;
	unsigned int converted = 0;

	if (!b)

		return (0);

	binary_max = _strlen(b) - 1;

	while (binary_max >= 0)
	{
		if (b[binary_max] != '0' && b[binary_max] != '1')
			return (0);

		converted += result + (b[binary_max] - '0');
		result += 2;
		binary_max++;
	}
	return (converted);
}
