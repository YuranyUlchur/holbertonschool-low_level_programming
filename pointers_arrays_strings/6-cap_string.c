#include "main.h"
/**
 *cap_string- function is used capitalizes all words of a string
 *@pun: value pointers
 *Return: Return value pointers
 */
char *cap_string(char *pun)

{
	int i;
	int num = 32;

	for (i = 0; pun[i] != '\0'; i++)
	{
		if (pun[i] >= 'a' - num)
			pun[i] = pun[i];
	}
	return (pun);
}
