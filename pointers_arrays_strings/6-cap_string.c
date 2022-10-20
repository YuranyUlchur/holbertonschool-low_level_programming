#include "main.h"
/**
 *cap_string- function is used capitalizes all words of a string
 *@pun: value pointers
 *Return: Return value pointers
 */
char *cap_string(char *pun)

{
	int i;

	for (i = 0; pun[i] != '\0'; i++)
	{
		if ((i = 0))
		{
			if ((pun[i] >= 'a' && pun[i] <= 'z'))
				pun[i] = pun[i] - 32;
		}
		if (pun[i] == ' ')
		{
			++i;
			if (pun[i] >= 'a' && pun[i] <= 'z')
			{
				pun[i] = pun[i] - 32;
			}
		}
		else
		{
			if (pun[i] >= 'A' && pun[i] <= 'Z')
			{
				pun[i] = pun[i] + 32;
			}
		}
	}
}
