#include "main.h"

/**
 *_strcmp -   compares two strings
 *@dest: value pointers
 *@src: value pointers
 *@n: value
 *Return: Return value poiners dest
 */
int _strcmp(char *s1, char *s2)

{
while (*s1 != '\0' || *s2 != '\0')
{
	if (*s1 != *s2)
{
	return(*s1 - *s2);
}
	s1++;
	s2++;

}

return(0);

}