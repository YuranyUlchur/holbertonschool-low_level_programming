#include "main.h"
/**
 *print_las_digit-  prints last digit of integer input
 *@n: value
 *Return: Always 0.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (n < 0)
{
	l = l * -1;
	_putchar(l + '0');
	return (l);
}
	else
{
	_putchar(l + '0');
	return (l);
}

}
