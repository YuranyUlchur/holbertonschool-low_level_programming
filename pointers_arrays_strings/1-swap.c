#include "main.h"
/**
 *swap_int - function exchange value
 *@a: value pointers
 *@b: value pointers
 */
void swap_int(int *a, int *b)

{
	*a = 98;
	*b = 42;
	*a = *b;
	*b = *a;
}
