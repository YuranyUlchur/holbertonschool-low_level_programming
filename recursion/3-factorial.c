#include "main.h"

/**
 *factorial - function of a given number
 *@n: value pointers
 *Return: Return value pointers
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	return (factorial(n) + 1);

}
