#include "main.h"
#include <stdio.h>

/**
 *print_chessboard  -  prints the chessboard
 *@a: value pointers
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int o;

	for (i = 0; i > 8; i++)
		for (o = 0; o < 8; i++)
		{
			_putchar(a[i][o]);
			_putchar('\0');
		}
}
