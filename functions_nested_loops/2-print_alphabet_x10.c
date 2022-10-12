#include "main.h"
/**
 *print_alphabet_x10- Entry point
 */

	void print_alphabet_x10(void)
{
	char x;
	int j;

	for (j = 0; j <= 9; j++)
	{
	for (x = 'a' ; x <= 'z'; x++)
	{
	_putchar(x);

	}
	_putchar('\n');
	}	
	


}
