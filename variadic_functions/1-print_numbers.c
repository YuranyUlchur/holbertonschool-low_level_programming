#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @n: value the const unsigned integer
 * @separator: value pointer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i < (n - 1))
		{
			printf("%d%c", va_arg(numbers, int), *separator);
		}

		else
		{
			printf("%d", va_arg(numbers, int));
		}
	}
	va_end(numbers);

	printf("\n");
}
