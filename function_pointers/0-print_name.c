#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function print name
 *@name: value pointer
 *@f: value pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(*f)(name);
	}

}
