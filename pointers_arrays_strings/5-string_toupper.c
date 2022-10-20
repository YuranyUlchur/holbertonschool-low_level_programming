#include "main.h"
/**
 *string_toupper - function is used to convert lowercase to uppercase
 *@pun: value pointers
 *Return: Return value pointers
 */
char *string_toupper(char *pun)
{

	int i;
	int num = 32;

	for (i = 0; pun[i] != '\0'; i++)
	{
		if (pun[i] >= 'a' && pun[i] <= 'z')
			pun[i] = pun[i] - num;
	}
	return (pun);
}
