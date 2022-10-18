#include "main.h"
/**
 *rev_string - function  value
 *@s: value pointers
 */
void rev_string(char *s)

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
		o = s[i];
		s[i] = s[j];
		s[j] = o;
		j--;
	}


}
