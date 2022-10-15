#include "main.h"
/**
 *print_line- function that prints the line
 *@n: value
 */
void print_line(int n)
{
	int colum;
	int caracter = 95;

	for (colum = 0; colum <= n; colum++)

	{
		_putchar(caracter);
	}

	_putchar('\n');

	if (n <= 0)
{
	_putchar('\n');
}

}
