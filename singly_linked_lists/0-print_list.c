#include <stdio.h>
#include "lists.h"

/**
 * print_list - function the print_list
 * @h: pointer const lis_t
 * Return: prints all the elements of a list_t list.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}