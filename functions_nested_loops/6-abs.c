#include "main.h"
/**
 *_abs- Entry point
 *@x- value
 *Return: Always 0.
 */
int _abs(int x)
{
	if (x < 0)
{
	x = (-1) * x;
	return(x);
}

	else
{
	return(x);
}
	_putchar('\n');
}
