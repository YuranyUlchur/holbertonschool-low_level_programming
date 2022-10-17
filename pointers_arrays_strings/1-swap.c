#include "main.h"
/**
 *swap_int - function exchange value
 *@a: value pointers
 *@b: value pointers
 */
void swap_int(int *a, int *b)

{
	int o = *a;

	*a = *b;
	*b = o;
}
