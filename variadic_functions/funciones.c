#include "variadic_functions.h"

void function_char(va_list value)
{
	printf("%c", va_arg(value, int));
}
void function_int(va_list value)
{
	printf("%d", va_arg(value, int));
}
void function_float(va_list value)
{
	printf("%f", va_arg(value, double));
}
void function_s(va_list value)
{
	char *s;
	s = va_arg(value, char *);
	if (s == NULL)
		s = ("(nil)");
	printf("%s", s);
}