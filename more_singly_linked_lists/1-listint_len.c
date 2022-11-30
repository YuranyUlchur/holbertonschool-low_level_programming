#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: pointer const listint_t
 * Return: prints all the elements of a list_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
