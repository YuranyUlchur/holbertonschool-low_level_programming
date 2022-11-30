#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function the print_list
 * @h: pointer const lis_t
 * Return: prints all the elements of a list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
