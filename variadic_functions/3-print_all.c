#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function  that prints strings
 * @format: value the const
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	int aux;
	char *string = "";
	op_t ops[] = {
		{"c", function_char},
		{"i", function_int},
		{"f", function_float},
		{"s", function_s},
		{NULL, NULL}};

	va_list value;
	va_start(value, format);

	while (format != NULL && format[i] != '\0')
	{
		aux = 0;
		while (aux < 4)
		{
			if (format[i] == *ops[aux].op)
			{
				printf("%s", string);
				ops[aux].f(value);
				string = ", ";
				break;
			}
			aux++;
		}
		i++;
	}
	va_end(value);
	printf("\n");
}
