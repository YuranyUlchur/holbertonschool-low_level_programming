#include "main.h"
/**
 * is_palindrome-  function palindrome
 *@s: value pointers
 *Return: return integer
 */
int is_palindrome(char *s)
{
	int i;
	int rev;
	int aux = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i--;
	for (rev = i; rev >= 0; rev--)
	{
		if (s[aux] != s[rev])
		{
			return (0);
		}
		aux++;
	}
	return (1);
}
