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
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = aux;
		*h = node;
		return (node);
	}
	while (i < (idx - 1))
	{
		if (!aux)
		{
			free(node);
			return (NULL);
		}
		i++;
		aux = aux->next;
	}

	node->next = aux->next;
	aux->next = node;

	return (node);
}
