#include "main.h"
/**
 *print_line- function that prints the line
 *@n: value
 */
void print_line(int n)
{
	int colum;
	int caracter = 95;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (colum = 0; colum <= n; n++)
		{
			_putchar(caracter);

		}
			_putchar('\n');
	}

}
