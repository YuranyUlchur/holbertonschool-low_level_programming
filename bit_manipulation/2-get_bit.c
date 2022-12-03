#include "main.h"

/**
 *get_bit- function that returns the value of a bit at a given index.
 *@n: variable unsigned long integer
 *@index: variableunsigned integer
 *Return: integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	else
		return (1);
}
