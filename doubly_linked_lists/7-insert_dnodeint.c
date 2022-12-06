#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * @h: pointer dlistint_t
 * @idx:  is the index of the list where the new node
 * @n: integer
 * Return: return dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *aux = *h;
	unsigned int i = 0, j = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (aux)
	{
		j++;
		aux = aux->next;
	}
	if (!*h && idx != 0)
		return (NULL);
	if (j < idx)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	aux = *h;
	while (i < idx - 1)
	{
		aux = aux->next;
		i++;
	}

	node->next = aux->next;
	aux->next = node;

	return (node);
}
