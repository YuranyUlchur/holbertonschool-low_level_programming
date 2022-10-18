#include "main.h"
/**
 *print_rev - function exchange value
 *@s: value pointers
 */

void print_rev(char *s)

{
	int i;
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
