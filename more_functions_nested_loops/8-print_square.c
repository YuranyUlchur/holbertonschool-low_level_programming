#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *print_square- print square
 *@size: of the square
 */
void print_square(int size)
{
	int p = 0;
	int s = 0;

	if (size > 0)
	{
		while (p < size)
		{
			while (s < size)
			{
				_putchar(35);
				s++;
			}
			_putchar('\n');
			p++;
			s = 0;
		}
	}
	else
		_putchar('\n');
}
