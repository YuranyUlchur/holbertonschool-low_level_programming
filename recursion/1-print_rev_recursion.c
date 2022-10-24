#include "main.h"

/**
 *_print_rev_recursion- function  prints a string in reverse
 *@s: value pointers
 */
void _print_rev_recursion(char *s)
{
	int x = 0;

	if (s[x] != '\0')
	{
		_print_rev_recursion(s + 1);

		_putchar(s[x]);
	}
}
