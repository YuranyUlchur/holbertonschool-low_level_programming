#include "main.h"
/**
 *_puts - function exchange value
 *@str: value pointers
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{

		_putchar(str[i]);
	}

	_putchar('\n');
}
