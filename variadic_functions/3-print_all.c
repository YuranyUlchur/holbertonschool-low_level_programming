#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * function_char - prints the char
 * @value: args
 */
void function_char(va_list value)
{
	printf("%c", va_arg(value, int));
}

/**
 * function_int - prints the integer
 * @value: args
 */
void function_int(va_list value)
{
	printf("%d", va_arg(value, int));
}

/**
 * function_float - prints the integer
 * @value: args
 */
void function_float(va_list value)
{
	printf("%f", va_arg(value, double));
}

/**
 * function_s - prints the integer
 * @value: args
 */
void function_s(va_list value)
{
	char *s;

	s = va_arg(value, char *);
	if (s == NULL)
		s = ("(nil)");
	printf("%s", s);
}

/**
 * print_all - function  that prints strings
 * @format: value the const
 */
void print_all(const char *const format, ...)
{
	int i = 0, aux;
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
