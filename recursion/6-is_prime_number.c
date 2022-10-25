#include "main.h"
/**
 *prime -  function  prime number
 *@n: value integer
 *@iterador: value
 *Return: returns 1 if it is integer otherwise 0
 */
int prime(int n, int iterador)
{
	if (iterador * iterador > n)
		return (1);
	if (n % iterador == 0 || n % (iterador + 2) == 0)
		return (0);
	return (prime(n, iterador + 6));
}

/**
 *is_prime_number -  function  the input integer is a prime number
 *@n: value integer
 *Return: returns 1 if it is integer otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}

	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (prime(n, 5));
}
