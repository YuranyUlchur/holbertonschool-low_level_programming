#include "main.h"
/**
 *print_sign- Entry point
 * @n: is the character received
 *
 * Return: Returns 1  0 or -1
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
