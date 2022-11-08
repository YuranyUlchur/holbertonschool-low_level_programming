#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_name - function name
 * @name: value pointer
 * @f: value pointer
 *
 */

void print_name(char *name, void (*f)(char *))

{
	if (f != NULL)
	{
		(*f)(name);
	}
}
