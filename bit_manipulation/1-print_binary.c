#include "main.h"

/**
 * print_binary- function bit masnipulation
 * @n: unsigned log integer
 */
void print_binary(unsigned long int n)
{
	if (n && n >> 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
