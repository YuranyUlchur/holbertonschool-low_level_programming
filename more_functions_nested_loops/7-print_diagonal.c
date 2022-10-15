#include "main.h"
/**
 *print_diagonal- unction draws a diagonal line on the terminal
 *@n: value
 */
void print_diagonal(int n)
{
	int diagonal;
	int columnas;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{

		for (diagonal = 1; diagonal <= n; diagonal++)
		{
			for (columnas = 1; columnas <= diagonal; columnas++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
