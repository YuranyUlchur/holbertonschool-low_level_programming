#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints
 * @n: value the const unsigned integer
 * @separator: value pointer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *pointer;

	va_start(string, n);
	va_list string;


	while (i < n)
	{
		pointer = va_arg(string, char *);

		if (pointer == NULL)

			printf("(nil)");

		else

			printf("%s", pointer);

		if (i != (n - 1) && separator != NULL)

			printf("%s", separator);
		i++;
	}
	va_end(string);
	printf("\n");
}
