#include "main.h"

/**
 * print_listint - function the print_list
 * @h: pointer const lis_t
 * Return: prints all the elements of a list_t list.
 */
void print_binary(unsigned long int n)
{
	while (n)
	{
		_putchar((n & 1) + '0');
		n >>= 1;
	}
	_putchar((n & 1) + '0');
}