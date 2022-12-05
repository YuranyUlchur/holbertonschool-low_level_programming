#include "main.h"

/**
 *clear_bit- function
 *@n: variable
 *@index: variable
 *Return: variable
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
