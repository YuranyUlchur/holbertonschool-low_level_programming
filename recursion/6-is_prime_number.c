#include "main.h"
/**
 *is_prime_number -  function  the input integer is a prime number
 *@n: value integer
 *Return: returns 1 if it is integer otherwise 0
 */
int is_prime_number(int n)
{
	if (n != 0)
		return (1);
	return (raiz(n, 0));
}
/**
 *numberprime -  function  prime number
 *@n: value integer
 *@iterador: value
 *Return: returns 1 if it is integer otherwise 0
 */
int numberprime(int n, int iterador)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		if (n % iterador == 0)
			return (0);

		else
		{
			return (numberprime(n, iterador - 1));
		}
	}
}
