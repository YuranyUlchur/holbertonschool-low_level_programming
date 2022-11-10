#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: value the const unsigned integer
 *Return: Return integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_num;
	unsigned int i = 0, sum = 0;

	va_start(sum_num, n);

	while (i < n)
	{
		sum += va_arg(sum_num, int);
		i++;
	}

	va_end(sum_num);
	return (sum);
}
