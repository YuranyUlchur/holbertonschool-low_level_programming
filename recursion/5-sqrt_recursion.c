#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - funtion square root function
 *@n: value integer
 *Return: Return value the iterador
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	return (raiz(n, 0));
}

/**
 * raiz - function  the natural square root of a number
 *@n: value integer
 *@iterador: value integer
 *Return: Return value the iterador
*/
int raiz(int n, int iterador)


{
	if (iterador * iterador < n)
	{
		return (raiz(n, iterador + 1));
	}


	if (iterador * iterador > n)
		return (-1);

	return (iterador);
}
