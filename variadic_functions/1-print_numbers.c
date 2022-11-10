#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @n: value the const unsigned integer
 * @separator: value pointers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;

	va_start(numbers, n);

	while (i < n)
	{
		if (separator != NULL && i < (n - 1))
		{
			printf("%d%c", va_arg(numbers, int), *separator);
		}

		else
		{
			printf("%d", va_arg(numbers, int));
		}
		i++;
	}
	va_end(numbers);

	printf("\n");
}
