#include "main.h"
/**
 *leet - Function that is responsible for displaying
 *@s: value pointers
 *Return: Return value s
 */
char *leet(char *s)
{
	char letters[] = {'A', 'a', 'E', 'e', 'L', 'l', 'O', 'o', 'T', 't', '\0'};
	char replace[] = {'4', '4', '3', '3', '1', '1', '0', '0', '7', '7', '\0'};
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (letters[j] == s[i])
			{
				s[i] = replace[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
