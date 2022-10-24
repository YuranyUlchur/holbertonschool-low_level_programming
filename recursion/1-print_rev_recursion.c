#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion- function  prints a string in reverse
 *@s: value pointers
 */
void _print_rev_recursion(char *s)
{

	int i;
	int x = 0;
	int j;
	char o;

	while (s[x] != '\0')
	{
		x++;
	}
	j = x - 1;

	for (i = 0; i < x / 2; i++)
	{
		o = s[x];
		s[x] = s[j];
		s[j] = o;
		j--;
	}
}
