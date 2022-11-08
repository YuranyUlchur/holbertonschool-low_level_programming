#include <stdio.h>

/**
 * print_name - functionn a name
 * @name: name value pointers
 * @f: function value pointers
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
