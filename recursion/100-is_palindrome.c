#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * is_palindrome-  function palindrome
 *@s: value pointers
 *Return: return integer
 */
int is_palindrome(char *s)
{
	int longitudstring;
	int i = 0;

	longitudstring = checkLenght(s);
	if (checkPalindrome(s, i, longitudstring - 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int checkPalindrome(char *str, int l, int r)
{
	if (str == NULL || l < 0 || r < 0)
	{
		return (0);
	}
	if (l >= r)
	{
		return (1);
	}
	if (str[l] == str[r])
	{
		return (checkPalindrome(str, l + 1, r - 1));
	}
	return (0);
}

int checkLenght(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (checkLenght(s) + 1);
	}
	return (*s);
}
