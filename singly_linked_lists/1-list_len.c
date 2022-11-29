#include <stdio.h>
#include "lists.h"

/**
 * list_len - function the returns the number of elements in a linked
 * @h: pointer const lis_t
 * Return: prints all the elements of a list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	list_t node = *h;
	while (node != NULL)
	{
		node = node->next;
		i++;
	}
	return (i);
}
