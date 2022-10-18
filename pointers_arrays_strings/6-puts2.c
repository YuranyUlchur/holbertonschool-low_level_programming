#include "main.h"
/**
 *puts2 - Function that is responsible for displaying
 *@str: value pointers
 */

void puts2(char *str)
{
	int x = 0;
	int i;

	while (str[x] != '\0')
	{
		x++;
	}

	for (i = 0; i < x; i++)
	{

		if (i % 2 == 0)

		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
